/*
 Sifer Aseph
 344. Reverse String
 
 Write a function that takes a string as input and returns the string reversed.
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string reverseString(string s) {
        string reverseMe(s.rbegin(), s.rend());
        
        return reverseMe;
    }
};

/*
 This tests only language fluency. Just use C++'s iterator (.rbegin(), .rend()).
 */

int main() {
    Solution test;
    cout << test.reverseString("hello") << endl;
    
    return 0;
}

/*
 Given s = "hello", return "olleh".
 */

