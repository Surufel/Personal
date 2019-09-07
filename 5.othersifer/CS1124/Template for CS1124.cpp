// Sifer Aseph
// This was made for my study group.

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

template <class T, class S>
// forward declaration
// When declaring your classes, be mindful of the return type. There are infinitely many return types, the most basic includes: int, double, bool, char, float. Common non-primitive return types includes string and vector.

// define your classes here (or struct since Sterling tests you on struct in the first exam)
// decide what goes where, public vs private
// public:
// constructor
// member function
//
// private:
// data members

// prototype your functions

int main() {
    // lots of function calls here
    // cout, endl
    
    // if
    
    // Gallagher would be happy if I talked about "problem forms". Use a "for" loop when you know, use a "while" loop when you don't know.
    
    // while
    
    // vector
    // push_back, clear
    
    // for
    // size_t
    // Side note, Sterling wants size_t.
    // New note, Katz wants int.
    // There are two school of thought, int vs size_t. It really boils down to preference but make sure you know why.
    
    // file handling
    // "in general, we want to open a stream, loop the stream into a type then return said type" Do you guys want to explain to me why I wrote this? Because I don't remember why I wrote this.
    // Anyway regarding stream state:
    // ifs.clear();
    // ifs.seekg(0, ios::beg);
    // clear() will reset the state and seekg() will tell it where to go. g stands for getpointer and p stands for putpointer which is associated with writing.
    // You have a second option, which is to close it. ifs.close(); ifs.open("...");
    // Your third option, which is to ifs.close(); if stream newifs("...");
    // It depends on your compiler / IDE.
    
    // vector of pointer to objects
    
    // address-of operator, dereferencing, address / location, pointers
    
    // memory management with new / delete
    
    // operator overload (ad hoc polymorphism)
    
    return 0; // compiler is nice enough to provide if you do not, but only in main
}

// define your functions here
// There is a function called exit() that returns and exit graciously. Use it when something doesn't go right.
