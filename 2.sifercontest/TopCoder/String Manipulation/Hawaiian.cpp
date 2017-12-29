/*
 Sifer Aseph
 TopCoder: Hawaiian
 
 200 Points
 */

#include <iostream>
#include <vector>
#include <string>
#include <regex>
#include <sstream>

class Hawaiian {
public:
    std::vector<std::string> getWords(std::string sentence) {
        std::vector<std::string> alohaha;
        std::string individualWord;
        std::istringstream iss(sentence);
        
        // Regular expression, here I come. The entire commented out block of mess is.. just a mess. It was the first thing that came to mind.
        
        std::regex notHawaii("[bcdfgjqrstvxyz]", std::regex_constants::basic | std::regex_constants::icase);
        
        // std::regex_constants::ECMAScript is not accepted by TopCoder.
        
        while (iss >> individualWord) {
            if (!(std::regex_search(individualWord, notHawaii))) {
                alohaha.push_back(individualWord);
            }
        }
        
        /*
         
         std::vector<char> language = {'a', 'e', 'i', 'o', 'u', 'h', 'k', 'l', 'm', 'n', 'p', 'w'};
         
         // Holy hell, I need to refactor! O(n^2)! There has to be a better way...
         
         if (sentence.length() >= 1 && sentence.length() <= 50) {
         while (iss >> individualWord) {
         for (int i = 0; i < individualWord.length(); ++i) {
         for (int j = 0; j < language.size(); ++j) {
         if (individualWord[i] == language[j]) {
         alohaha.push_back(individualWord);
         }
         }
         }
         }
         }
         */
        
        return alohaha;
    }
};

// Just submit the above. Remove below. Low, low, low.

int main () {
    Hawaiian test;
    
    for (int i = 0; i < test.getWords("Hawaii is an island").size(); ++i) {
        std::cout << test.getWords("Hawaii is an island")[i] << " ";
    }
    
    std::cout << std::endl;
    
    for (int i = 0; i < test.getWords("Mauna Kea and Mauna Koa are two mountains").size(); ++i) {
        std::cout << test.getWords("Mauna Kea and Mauna Koa are two mountains")[i] << " ";
    }
    
    std::cout << std::endl;
    
    for (int i = 0; i < test.getWords("Pineapple grows in Hawaii").size(); ++i) {
        std::cout << test.getWords("Pineapple grows in Hawaii")[i] << " ";
    }
    
    return 0;
}

// Submission was successful for 65.27 points.

/*

 */
