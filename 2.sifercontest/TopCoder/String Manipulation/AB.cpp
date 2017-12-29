// Sifer Aseph
// TopCoder: AB
// https://community.topcoder.com/stat?c=problem_statement&pm=13642&rd=16312

#include <iostream>
#include <string>
#include <math.h>

class AB {
public:
    std::string createString(int N, int K) {
        std::string stringToMake = "";
        
        if (K > N*N/4) {
            stringToMake = "\" \"";
            return stringToMake;
        }
        
        for (size_t i = 0; i <= floor(N/2); ++i) {
            stringToMake += 'A';
        }
        
        for (size_t i = 0; i < ceil(N/2); ++i) {
            stringToMake += 'B';
        }
        
        return stringToMake; // if this is seen, it means I missed a case
    }
};

int main() {
    AB test;
    
    std::cout << test.createString(3,2) << std::endl; // should return AAB or ABB
    std::cout << test.createString(5,8) << std::endl; // empty string
    
    return 0;
}

/*
 You are given two ints: N and K. Lun the dog is interested in strings that satisfy the following conditions:
 
 - The string has exactly N characters, each of which is either 'A' or 'B'.
 - The string s has exactly K pairs (i, j) (0 <= i < j <= N-1) such that s[i] = 'A' and s[j] = 'B'.
 
 If there exists a string that satisfies the conditions, find and return any such string. Otherwise, return an empty string.
 */
