/*
 Sifer Aseph
 258. Add Digits
 
 Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
 
 For example:
 
 Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
 */

#include <iostream>

class Solution {
public:
    Solution () {
        
    }
    /*
     int howManyDigits(int num) {
     int digitCount = 0;
     
     if (num < 10) {
     return 1;
     } else {
     while (num) {
     num = num / 10;
     digitCount++;
     }
     
     return digitCount;
     }
     }
     */
    int addDigits(int num) {
        if (num < 10) {
            return num;
        } else {
            //int digits = howManyDigits(num);
            
            int sum = 0;
            
            if (num >= 10) {
                sum += num / 10;
            }
            
            int digit = num % 10;
            sum += digit;
            
            return addDigits(sum);
        }
    }
    
private:
    
};

int main() {
    Solution digitTest;
    std::cout << ":" << digitTest.addDigits(65536) << ":" << std::endl;
    
    return 0;
}
