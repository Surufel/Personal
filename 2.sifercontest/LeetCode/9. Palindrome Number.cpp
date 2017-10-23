/*
 Sifer Aseph
 9. Palindrome Number
 
 Determine whether an integer is a palindrome. Do this without extra space.
 
 Could negative integers be palindromes? (ie, -1)
 
 If you are thinking of converting the integer to string, note the restriction of using extra space.
 
 You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?
 
 There is a more generic way of solving this problem.
 */

#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        int halfReverse = 0; // to prevent overflow, we only reverse half to match the other half
        
        while (x > halfReverse) {
            halfReverse = halfReverse * 10 + x % 10;
            x /= 10;
        }
        
        return x == halfReverse || x == halfReverse / 10; // the second term is for if x has an odd number of digits
    }
};

/*
 This tests logic and modular arithmetics (some discrete mathematics). It should be O(log_10(n)) time complexity. First consider the corner cases (negative numbers, 10s, etc.) and then think about the logic. Converting int to string and back is more tedious but a workable solution. The better solution only requires half the number to solve. 12321 means only 12 and 21 are needed to compare. Line 32 makes consideration for odd and even number of digits.
 */

int main() {
    Solution test;
    std::cout << test.isPalindrome(-1) << std::endl;
    std::cout << test.isPalindrome(12321) << std::endl;
}
