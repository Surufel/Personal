/*
 Sifer Aseph
 28. Implement strStr()
 
 Implement strStr().
 
 Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

// I kept running into a problem where it'd only complete 70/74 tests. I decided to look into the discussion and somebody else had nearly exactly the same solution as mine. I don't understand what this person did differently from me. I asked around and nobody could understand or explain either. I would love for somebody to explain why my code is wrong.

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int m = haystack.length(), n = needle.length();
        if (!n) return 0;
        for (int i = 0; i < m - n + 1; i++) {
            int j = 0;
            for (; j < n; j++)
                if (haystack[i + j] != needle[j])
                    break;
            if (j == n) return i;
        }
        return -1;
    }
};

/* My code:
class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if (!needle.length()) {
            return 0;
        }
        
        for (int i = 0; i < haystack.length() - needle.length() + 1; i++) {
            int j = 0;
            for (; j < needle.length(); j++)
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            if (j == needle.length()) {
                return i;
            }
        }
        
        return -1;
    }
};
*/

int main() {
    Solution test;
    
    
    return 0;
}
