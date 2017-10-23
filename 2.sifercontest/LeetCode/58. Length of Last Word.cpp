/*
 Sifer Aseph
 58. Length of Last Word
 
 Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
 
 If the last word does not exist, return 0.
 
 Note: A word is defined as a character sequence consists of non-space characters only.
 
 For example,
 Given s = "Hello World",
 return 5.
 */

#include <iostream>
#include <string>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int count = 0, tail = s.length() - 1;
        while (tail >= 0 && s[tail] == ' ') tail--;
        while (tail >= 0 && s[tail] != ' ') {
            count++;
            tail--;
        }
        return count;
    }
};

/*
 This is entirely a logic test but like many discussing this, this is an extremely frustrating one.
 */

/*
class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int count = 0;
        
        for (int i = s.length() - 1; i >= 0; --i) {
            //std::cout << s[i] << "\n";
            if (s[i] == ' ') {
                continue;
            } else if (s[i] != ' ') {
                count++;
            } else {
                break;
            }
        }
        
        return count;
    }
};
 */

int main() {
    Solution test;
    std::cout << test.lengthOfLastWord("") << "\n"; // correct if 0
    std::cout << test.lengthOfLastWord(" ") << "\n"; // correct if 0
    std::cout << test.lengthOfLastWord("a") << "\n"; // correct if 1
    std::cout << test.lengthOfLastWord(" a") << "\n"; // correct if 1
    std::cout << test.lengthOfLastWord("hello world") << std::endl; // correct if 5
    std::cout << test.lengthOfLastWord("     ") << std::endl; // correct if 0
    std::cout << test.lengthOfLastWord("a ") << std::endl; // correct if 1
}
