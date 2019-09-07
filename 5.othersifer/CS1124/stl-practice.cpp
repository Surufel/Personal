#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

template <class Iter, class Thing>
Iter myFind(Iter start, Iter stop, Thing target);

void print(const vector<char>& v, ostream& os = cout);
void print(const list<char>& l, ostream& os = cout) ;

int main() {
	// 1. Set up array
	char carray[] = "Bjarne Stroustrup";
	size_t length = strlen(carray);
	cout << carray << " is " 
		<< length << " characters\n";

	// 2. Set up vector
	cout << "\n========================\n";
	vector<char> vc(carray, carray+length);
	cout << "VC: ";
	print(vc);

	// 3. Generic algorithms on vector
	//   3a. reverse on vector
	reverse(vc.begin(), vc.end());
	cout << "VC after reverse: ";
	print(vc);

	//   3b. find on vector
	if (find(vc.begin(), vc.end(), 'q') == vc.end())
		cout << "'q' is not in vc\n";
	else cout << "'q' is in vc\n";

	//   3c. sort on vector
	sort(vc.begin(), vc.end());
	cout << "VC after sort: ";
	print(vc);

	//   3d. count on vector
	cout << "vc has " 
		<< count(vc.begin(), vc.end(), 'u') 
		<< " u's\n";

	//   3e. copy on array and vector
	copy(carray, carray+length, vc.begin());
	cout << "VC after copy: ";
	print(vc);

	/////////////////////////////////////////////
	// 4. Generic algorithms on list
	//    First initialize.
	list<char> lc(vc.begin(), vc.end());
	cout << "\n========================\n";
	cout << "LC: ";
	print(lc);

	//   4a. reverse on vector
	reverse(lc.begin(), lc.end());
	//lc.reverse();
	cout << "LC after reverse: ";
	print(lc);


	//   4b. find on vector
	if (find(lc.begin(), lc.end(), 'q') == lc.end())
		cout << "'q' is not in lc\n";
	else cout << "'q' is in lc\n";

	//   4c. sort on vector
	lc.sort();
	cout << "LC after sort: ";
	print(lc);

	//   4c. count on vector
	cout << "lc has " << count(lc.begin(), lc.end(), 'u')
		<< " u's\n";

	//   4e. copy on array and vector
	copy(carray, carray+length, lc.begin());
	cout << "lc after copy: ";
	print(lc);

	//////////////////////////////////////////////////////
	// 5. iterators

	cout << "\n========================\n";
	list<char>::iterator i;

	//   5.a declaring an iterator
	//       return value of find.
	//       dereferencing an interator
	i = find(lc.begin(), lc.end(), 'u');
	cout << "Found 'u'in LC: " << *i << endl;

	//   5.b incrementing an iterator
	++i;
	cout << "After 'u' is: " << *i << endl;

	//  5.c Implementing a generic algorithm
	list<char>::iterator result = myFind(lc.begin(), lc.end(), 'r');
	cout << "Found 'r'in LC using myFind: " << *result << endl;
	++result;
	cout << "After 'r' is: " << *result << endl;

	////////////////////////////////////////
	// 6. Back inserter
	//
	// Create an empty list and fill it from the previous list.
	list<char> lc2;
	for (list<char>::iterator i = lc.begin(); i != lc.end(); ++i)
		lc2.push_back(*i);
	print(lc2);

	//// Create another empty list and fill it from the previous list.
	list<char> lc3;
	copy(lc.begin(), lc.end(), back_inserter(lc3));
	print(lc3);
	cout << endl;

}

template <class Iter, class Thing>
Iter myFind(Iter start, Iter stop, Thing target) {
	for (Iter p = start; p != stop; ++p)
		if (*p == target) return p;
	return stop;
}

void print(const vector<char>& v, ostream& os) {
	for (vector<char>::const_iterator i = v.begin(); i != v.end(); ++i) 
		os << *i;
	os << endl;
}
void print(const list<char>& l, ostream& os) {
	for (list<char>::const_iterator i = l.begin(); i != l.end(); ++i) 
		os << *i;
	os << endl;
}
