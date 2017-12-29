/*
 Sifer Aseph
 TopCoder: ArrayHash
 https://community.topcoder.com/stat?c=problem_statement&pm=4503
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <map>

class ArrayHash {
public:
    int valueArray(char key) { // Ayush's idea, really nice, was going to do it the hard way via map or enum
        if (key > 90) {
            return key-97;
        }
        
        return key-65;
    }
    
    int getHash(std::vector<std::string> input) {
        // Value = (Alphabet Position) + (Element of input) + (Position in Element)
        value = 0;
        for (int i = 0; i < input.size(); ++i) {
            std::string alphabetPosition = input[i];
            
            for (int j = 0; j < alphabetPosition.length(); ++j) {
                value += j;
                value += i;
            }
            
            for (int k = 0; k < alphabetPosition.length(); ++k) {
                char omgreally = alphabetPosition[k];
                value += valueArray(omgreally);
            }
        }
        
        return value;
    }
    
private:
    int value = 0;
};

int main() {
    ArrayHash test;

    std::cout << test.getHash({"CBA", "DDD"}) << std::endl; // should return 21
    std::cout << test.getHash({"Z"}) << std::endl; // 25
    std::cout << test.getHash({"ABCDEFGHIJKLMNOPQRSTUVWXYZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZ"}) << std::endl; // 4290
    
    return 0;
}

/*
 You will be given a String[] input. The value of each character in input is computed as follows:
 Value = (Alphabet Position) + (Element of input) + (Position in Element)
 All positions are 0-based. 'A' has alphabet position 0, 'B' has alphabet position 1, ... The returned hash is the sum of all character values in input. For example, if
 input = {"CBA",
 "DDD"}
 then each character value would be computed as follows:
 2 =   2 + 0 + 0   :  'C' in element 0 position 0
 2 =   1 + 0 + 1   :  'B' in element 0 position 1
 2 =   0 + 0 + 2   :  'A' in element 0 position 2
 4  =  3 + 1 + 0   :  'D' in element 1 position 0
 5  =  3 + 1 + 1   :  'D' in element 1 position 1
 6  =  3 + 1 + 2   :  'D' in element 1 position 2
 The final hash would be 2+2+2+4+5+6 = 21.
 */
