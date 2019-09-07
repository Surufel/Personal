/*
	Problem: http://cis.poly.edu/cs1124/CS1124SampleCode/BadFileHandling/testBadFileHandling.cpp
	The solution to "Example of how NOT to read a file." 
	Sifer Aseph
	CS1124 @ New York University Polytechnic School of Engineering
*/

// This program has been stripped down to focus on a common 
// student programming error when reading files.  The part of
// the code to pay attention to is the loop.  

#include <iostream>	// cin, cout, cerr, endl
#include <fstream>	// ifstream
#include <string>	// string

using namespace std;

int main() {
	ifstream payrollStream;
	payrollStream.open("payroll.txt");

	string name;
	int money;
	// This loop is WRONG!!  The only person who would approve is whoever is
	// the person at the end of payroll file.  WHY does this code fail to work
	// properly?
	while ( payrollStream >> name >> money ) { // Originally it was while ( !payrollStream.eof() ).
		cout << "Pay to the order of "<< name << " $" << money << endl;
	}

	return 0;
}

// The hint is the order, the logic in how this line is ran. Think about what "while not end of file" says. 
// You grab the last line twice. You almost never want to use while(!stuff.eof()).
