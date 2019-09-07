/*
	testStringStreams.cpp
	Demonstrate how to use istringstream
	and ostringstream.
*/

#include <sstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
	
	string s = "Now is the time for all good men ...";
	
	// Create an input string stream, associated
	// with a string variable to read from.
	istringstream iss(s);

	// Here we read from the string stream
	// just like any other input stream, but
	// the information is coming from the string.
	string x;
	while (iss >> x) cout << x << endl;

	// Now create an output string stream.
	// Notice that we don't specify a string for it.
	ostringstream oss;

	// create another istringstream to read from
	istringstream iss2(s);

	// Here we are reading from the input string stream
	// and writing back to the output string stream.
	while (iss2 >> x) oss << x << '/';

	// Now we can get everything that was printed to the
	// output string stream as a string, using the method str()
	string temp = oss.str();
	cout << "========\n" << temp << endl;

	// How would you convert a double to a string?
	ostringstream oss2;
	oss2 << 3.1459;
	cout << oss2.str() << endl;

}