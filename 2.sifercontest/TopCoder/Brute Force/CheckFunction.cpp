/*
 Sifer Aseph
 TopCoder: CheckFunction
 https://community.topcoder.com/stat?c=problem_statement&pm=4788
 */

#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

// -1 returned means something is wrong

class CheckFunction {
public:
    int convertMe(int digit) {
        if (digit == 0) {
            return 6;
        } else if (digit == 1) {
            return 2;
        } else if (digit == 2) {
            return 5;
        } else if (digit == 3) {
            return 5;
        } else if (digit == 4) {
            return 4;
        } else if (digit == 5) {
            return 5;
        } else if (digit == 6) {
            return 6;
        } else if (digit == 7) {
            return 3;
        } else if (digit == 8) {
            return 7;
        } else if (digit == 9) {
            return 6;
        }
        
        return -1;
    }
    
    int newFunction(std::string code) {
        std::vector<int> addMe;
        for (int i = 0; i < code.length(); ++i) {
            addMe.push_back(convertMe((code[i] - '0'))); // http://www.asciitable.com
        }
        
        int sumMe = 0;
        
        for (int j = 0; j < addMe.size(); ++j) {
            sumMe += addMe[j];
        }
        
        return sumMe;
    }
};

int main() {
    CheckFunction test;
    std::cout << test.newFunction("13579") << std::endl; // should return 21
    std::cout << test.newFunction("02468") << std::endl; // 28
    
    return 0;
}

/*
 You are given a String code containing a message composed entirely of decimal digits ('0'-'9'). Each digit consists of some number of dashes (see diagram below). A "check function" of a message is defined as the total number of dashes in the message. Return the value of the check function for the message represented in code.
 0123456789
 */
