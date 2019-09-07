/*
	testMenu.cpp
	John Sterling
	CS1124

	Here is the structure of a typical menu driven application.
	The functions "handleCase1", etc. would be replaced by appropriate
	functions with suitable names for the particular task.  In addition, 
	they may well need to be passed arguments.
*/

#include <iostream>

using namespace std;

// Function prototypes
void displayMenu();
int getMenuOption();
void handleCase1();
void handleCase2();
void handleCase3();

int main() {

	while(true) {
		displayMenu();
		int option = getMenuOption();
		switch (option) {
			case 0:
				exit(0);
			case 1:
				handleCase1();
				break;
			case 2:
				handleCase2();
				break;
			case 3:
				handleCase3();
				break;
			default:
				cout << "Invalid entry.  Type 0 to exit.\n";
		}
	}
}

void handleCase1() {
	cout << "Handling case 1\n";
}
void handleCase2() {
	cout << "Handling case 2\n";
}
void handleCase3() {
	cout << "Handling case 3\n";
}

void displayMenu() {
	cout << "\nOptions:\n"
		<< "1. [description of option 1]\n"
		<< "2. [description of option 2]\n"
		<< "3. [description of option 3]\n"
		<< "0. Exit\n";
}
int getMenuOption() {
	cout << "Choice? ";
	int choice;
	cin >> choice;
	return choice;
}