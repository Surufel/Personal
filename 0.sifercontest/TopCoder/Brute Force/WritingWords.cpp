/*
 Sifer Aseph
 TopCoder: WritingWords
 https://community.topcoder.com/stat?c=problem_statement&pm=13072
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <map>

class WritingWords {
public:
    int ASCIImagic(char key) {
        if (key == 'A') { // well, an alternative; I will try to develop more alternatives (in addition to
            return 1;
        } else if (key == 'B') {
            return 2;
        } else if (key == 'C') {
            return 3;
        } else if (key == 'D') {
            return 4;
        } else if (key == 'E') {
            return 5;
        } else if (key == 'F') {
            return 6;
        } else if (key == 'G') {
            return 7;
        } else if (key == 'H') {
            return 8;
        } else if (key == 'I') {
            return 9;
        } else if (key == 'J') {
            return 10;
        } else if (key == 'K') {
            return 11;
        } else if (key == 'L') {
            return 12;
        } else if (key == 'M') {
            return 13;
        } else if (key == 'N') {
            return 14;
        } else if (key == 'O') {
            return 15;
        } else if (key == 'P') {
            return 16;
        } else if (key == 'Q') {
            return 17;
        } else if (key == 'R') {
            return 18;
        } else if (key == 'S') {
            return 19;
        } else if (key == 'T') {
            return 20;
        } else if (key == 'U') {
            return 21;
        } else if (key == 'V') {
            return 22;
        } else if (key == 'W') {
            return 23;
        } else if (key == 'X') {
            return 24;
        } else if (key == 'Y') {
            return 25;
        } else if (key == 'Z') {
            return 26;
        }
        
        return -1;
    }
    
    int write(std::string word) {
        combo = 0;
        for (int i = 0; i < word.length(); ++i) {
            combo += ASCIImagic(word[i]);
        }
        
        return combo;
    }
    
private:
    int combo = 0;
};

int main() {
    WritingWords test;

    std::cout << test.write("A") << std::endl; // should return 1
    std::cout << test.write("ABC") << std::endl; // 6
    std::cout << test.write("ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ") << std::endl; // 1300
    
    return 0;
}

/*
 Fox Ciel wants to type a word on her old cell phone. The cell phone has only one button. The letter A is typed by tapping the button once, B by tapping it twice in a row, and so on, in alphabetical order. Thus, the last letter Z is typed by tapping the button 26 times without a pause.

 You are given a String word. Compute and return the answer to the following question: How many times will Ciel tap the button while typing this word?
 */
