/*
 Sifer Aseph
 520. Detect Capital
 
 Given a word, you need to judge whether the usage of capitals in it is right or not.
 
 We define the usage of capitals in a word to be right when one of the following cases holds:
 
 All letters in this word are capitals, like "USA".
 All letters in this word are not capitals, like "leetcode".
 Only the first letter in this word is capital if it has more than one letter, like "Google".
 Otherwise, we define that this word doesn't use capitals in a right way.
 */

#include <iostream>
#include <string>
#include <regex>

class Solution {
public:
    bool detectCapitalUse(std::string word) {
        return std::regex_match(word, std::regex("[A-Z]+|[a-z]+|[A-Z][a-z]+"));
    }
};

int main() {
    Solution solutionTest;
    std::cout << "Testing " << solutionTest.detectCapitalUse("USA") << std::endl;
    std::cout << "Testing " << solutionTest.detectCapitalUse("leetcode") << std::endl;
    
    return 0;
}
