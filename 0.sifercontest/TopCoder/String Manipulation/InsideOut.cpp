/*
 Sifer Aseph
 TopCoder: InsideOut
 https://community.topcoder.com/stat?c=problem_statement&pm=3452
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

class InsideOut {
public:
    std::string unscramble(std::string line) {
        size_t mid = line.length()/2;
        std::string combined = "";
        
        for (int i = mid-1; i >= 0; --i) { // left
            combined += line[i];
        }
        
        for (int j = line.size(); j >= mid; --j) { // right
            combined += line[j];
        }
        
        return combined;
    }
    
private:

};

int main() {
    InsideOut test;

    std::cout << test.unscramble("I ENIL SIHTHSIREBBIG S") << std::endl; // should return "THIS LINE IS GIBBERISH"
    std::cout << test.unscramble("LEVELKAYAK") << std::endl; // "LEVELKAYAK"
    
    return 0;
}

/*
 Your printer has been infected by a virus and is printing gibberish. After staring at several printed pages for a while, you realize that it is printing every line inside-out. In other words, the left half of each line is being printed starting in the middle of the page and proceeding out toward the left margin. Similarly, the right half of each line is being printed starting at the right margin and proceeding in toward the middle of the page. For example, the line
 
 THIS LINE IS GIBBERISH
 is being printed as
 I ENIL SIHTHSIREBBIG S
 Your task is to unscramble a String line from its printed form back into its original order. You can assume that line contains an even number of characters.
 */
