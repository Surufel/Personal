/*
 Sifer Aseph
 TopCoder: TheAlmostLuckyNumbersDivTwo
 http://community.topcoder.com/stat?c=problem_statement&pm=11462
 
 Note: Poorly worded problem.
 */

#include <iostream>
#include <string>

class TheAlmostLuckyNumbersDivTwo {
public:
    int find (int a, int b) {
        const char luckyA = '4';
        const char luckyB = '7';
        
        int total = 0;
        
        if (a >= 1 && a <= 1000000 && b >= a && b <= 1000000) {
            for (; a <= b; ++a) {
                if (a < 10) {
                    total++;
                }
                
                if (a >= 10) { // 10 is never going to be lucky, no matter what though.
                    std::string stringifiedA = std::to_string(a);
                    
                    int notLucky = 0;
                    
                    for (std::string::iterator itr = stringifiedA.begin(); itr != stringifiedA.end(); ++itr) {
                        if ((*itr != luckyA) && (*itr != luckyB)) { // Line 32-33 is key to line 38-39!
                            notLucky++;
                        }
                        
                    }
                    
                    if (notLucky <= 1) {
                        total++;
                    }
                }
            }
        }
        
        return total;
    }
};

int main () {
    TheAlmostLuckyNumbersDivTwo test;
    
    std::cout << test.find(4, 7) << std::endl;
    std::cout << test.find(8, 19) << std::endl;
    std::cout << test.find(28, 33) << std::endl;
    std::cout << test.find(1234, 4321) << std::endl;
    
    return 0;
}

/*
 John and Brus believe that the digits 4 and 7 are lucky and all others are not. According to them, an almost lucky number is a number that contains at most one non-lucky digit in its decimal representation. Return the total number of almost lucky numbers between a and b, inclusive.
 */
