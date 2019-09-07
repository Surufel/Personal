#include <iostream>
using namespace std;

// Class Foo.
class Foo {
public:
	// Constructor that takes a c-string
	Foo(char []);
	// Destructor
	~Foo();
	// Simple display function.
	void display() {cout << arr << endl;}
private:
	// A c-string on the heap.
	char* arr;
};

// Constructor taking a c-string
Foo::Foo(char a[]) {
	arr = new char[1+strlen(a)];
	strcpy(arr, a);
}

// Destructor.  Just frees up the array of characters.
Foo::~Foo() {
	delete [] arr;
}

// A function that does [nearly] nothing.
void doNothing(Foo) {}

int main() {
	// Create a Foo object.
	Foo a("Howdy");
	// Display it.
	a.display();
	// Pass it to doNothing
	doNothing(a);
	// Try to display it again.  Oops...
	a.display();
}
