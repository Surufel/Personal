/*
 Sifer Aseph
 13. Roman to Integer
 
 Given a roman numeral, convert it to an integer.
 
 Input is guaranteed to be within the range from 1 to 3999.
 */

#include <iostream>
#include <string>
#include <map>
#include <vector>

class Solution {
public:
    int romanToInt(std::string s) {
        std::map<char, int> roman;
        roman['M'] = 1000;
        roman['m'] = 1000;
        roman['D'] = 500;
        roman['d'] = 500;
        roman['C'] = 100;
        roman['c'] = 100;
        roman['L'] = 50;
        roman['l'] = 50;
        roman['X'] = 10;
        roman['x'] = 10;
        roman['V'] = 5;
        roman['v'] = 5;
        roman['I'] = 1;
        roman['i'] = 1;
        
        int sum = roman[s.back()];
        
        for (int i = s.length() - 2; i >= 0; --i) {
            if (roman[s[i]] < roman[s[i+1]]) {
                sum -= roman[s[i]];
            } else {
                sum += roman[s[i]];
            }
        }
        
        return sum;
    }
};

int main() {
    Solution test;
    std::cout << test.romanToInt("DCXXI") << std::endl; // 621
    
    return 0;
}
