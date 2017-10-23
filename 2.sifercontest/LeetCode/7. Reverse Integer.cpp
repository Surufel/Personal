/*
 Sifer Aseph
 7. Reverse Integer
 
 Reverse digits of an integer.
 
 Example1: x = 123, return 321
 Example2: x = -123, return -321
 
 If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.
 
 Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases?
 
 For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
 
 The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows.
 */

#include <iostream>

class Solution {
public:
    int reverse(int x) {
        long reversedNumber = 0;
        int remainder;
        
        while(x != 0) {
            remainder = x%10;
            reversedNumber = reversedNumber*10 + remainder;
            x /= 10;
            if (reversedNumber < INT_MIN || reversedNumber > INT_MAX) {
                return 0;
            }
        }
        
        return reversedNumber;
    }
};

/*
 This tests understanding of modular arithmetics (some discrete mathematics) and language fluency (C++'s INT_MIN, INT_MAIN). Time complexity should be O(n). Reverse the number until x reaches 0. Then consider the overflow cases (line 31 to 33). These are linear operations.
 */

int main() {
    Solution test;
    std::cout << test.reverse(1534236469) << std::endl;
    
    return 0;
}
