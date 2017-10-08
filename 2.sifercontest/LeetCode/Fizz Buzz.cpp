/*
 Sifer Aseph
 412. Fizz Buzz
 
 Write a program that outputs the string representation of numbers from 1 to n.
 
 But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> fizzMe;
    
    vector<string> fizzBuzz(int n) {
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 && i % 5 == 0) {
                fizzMe.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                fizzMe.push_back("Fizz");
            } else if (i % 5 == 0) {
                fizzMe.push_back("Buzz");
            } else {
                fizzMe.push_back(to_string(i));
            }
        }
        
        return fizzMe;
    }
};

int main() {
    Solution test;
    vector<string> testMe = test.fizzBuzz(15);
    for (int i = 0; i < 15; ++i) {
        cout << testMe[i] << endl;
    }
    
    return 0;
}

/*
 n = 15,
 
 Return:
 [
 "1",
 "2",
 "Fizz",
 "4",
 "Buzz",
 "Fizz",
 "7",
 "8",
 "Fizz",
 "Buzz",
 "11",
 "Fizz",
 "13",
 "14",
 "FizzBuzz"
 ]
 */
