/*
 Sifer Aseph
 TopCoder: KiloMan
 https://community.topcoder.com/stat?c=problem_statement&pm=2268
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <map>

class KiloMan {
public:
    int hitsTaken (std::vector<int> pattern, std::string jumps) {
        hits = 0;
        
        for (int i = 0; i < pattern.size(); ++i) {
            //std::cout << "index: " << i << std::endl;
            if (pattern[i] <= 2 && jumps[i] == 'S') {
                //std::cout << "first hit: " << i << std::endl;
                hits++;
            }
            
            if (pattern[i] > 2 && jumps[i] == 'J') {
                //std::cout << "second hit: " << i << std::endl;
                hits++;
            }
        }
        
        return hits;
    }
    
private:
    int hits = 0;
};

int main() {
    KiloMan test;

    std::cout << test.hitsTaken({1,3,2,3,3,1,2,2,1}, "JJSSSJSSJ") << std::endl; // should return 4
    std::cout << test.hitsTaken({1,1,1,1,1,1,1,2,2,2,2,2,2,2,3,3,3,3,3,3,3,4,4,4,4,4,4,4,5,5,5,5,5,5,5,6,6,6,6,6,6,6,7,7,7,7,7,7,7}, "SSSSSSSSSSSSSSJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ") << std::endl; // 49
    std::cout << test.hitsTaken({1,2,2,1}, "SJJS") << std::endl; // 2
    std::cout << test.hitsTaken({1}, "J") << std::endl; // 0
    
    return 0;
}

/*
 You've reached one of the last bosses in the new hit 2-D side-scrolling action game, KiloMan. The boss has a large gun that can shoot projectiles at various heights. For each shot, KiloMan can either stand still or jump. If he stands still and the shot is at height 1 or 2, then he gets hit. If he jumps and the shot is at a height above 2, then he is also hit. Otherwise, he is not hit. Given the height of each shot and a sequence of jumps, how many hits will KiloMan take?
 
 The input int[] pattern is the pattern of heights at which the shots are being fired. Each element of pattern will be between 1 and 7, inclusive. The input String jumps is the sequence of jumps that KiloMan will attempt; 'J' means he will jump and 'S' means he will stand still. For example, if element 0 of pattern is 3 and character 0 of jumps is 'J', then KiloMan will jump right as a shot is fired at height 3 (and thus he will be hit).
 
 Your method should return an int representing the number of times KiloMan is hit.
 */
