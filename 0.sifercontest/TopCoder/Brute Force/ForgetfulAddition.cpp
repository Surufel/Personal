/*
 Sifer Aseph
 TopCoder: ForgetfulAddition
 http://community.topcoder.com/stat?c=problem_statement&pm=13553
 */

#include <iostream>
#include <string> // substr(pos, len);
#include <stdlib.h>
#include <vector>

class ForgetfulAddition {
public:
    int minNumber(std::string expression) {
        std::vector<int> numbers;
        int result = 0;
        
        if (expression.length() >= 2 && expression.length() <= 8) {
            for (std::string::iterator itr = expression.begin(); itr != expression.end(); ++itr) {
                if (expression.length() == 2) {
                    int a = std::stoi(expression.substr(0, 1));
                    int b = std::stoi(expression.substr(1, 1));
                    return a + b;
                }
                if (expression.length() > 2 && expression.length() <= 8) {
                    int charCounter = 1;
                    int expressionLength = expression.length();
                    for (int step = 0; step < expression.length(); step++) {
                        int a = std::stoi(expression.substr(0, charCounter));
                        
                        if (expressionLength != charCounter) {
                            int b = std::stoi(expression.substr(charCounter, expressionLength - charCounter));
                            result = a + b;
                        }
                        
                        charCounter++;
                        numbers.push_back(result);
                    }
                }
            }
        } else {
            exit(EXIT_FAILURE);
        }
        
        //for (int i = 0; i < numbers.size(); ++i) {
        //    std::cout << "Size: " << numbers.size() << std::endl;
        //    std::cout << numbers[i] << " " << std::endl;
        //}
        
        int smallestNumber = *(std::min_element(numbers.begin(), numbers.end()));
        
        return smallestNumber;
    }
};

int main () {
    ForgetfulAddition test;
    std::cout << "Result: " << test.minNumber("92") << std::endl;
    std::cout << "Result: " << test.minNumber("138") << std::endl;
    // 39
    // 21
    std::cout << "Result: " << test.minNumber("1234") << std::endl;
    /*
     1+234=235
     12+34=46
     123+4=127
     Should print out 46.
     */
    std::cout << "Result: " << test.minNumber("31415926") << std::endl;
    
    return 0;
}

/*
 Alice had two positive integers, a and b. She typed the expression "a+b" into her computer, but the '+' key malfunctioned. For example, instead of "128+9" the computer's screen now shows "1289".
 
 Later, Bob saw the string on the screen. He knows that the '+' sign is missing but he does not know where it belongs. He now wonders what is the smallest possible result of Alice's original expression.
 
 For example, if Bob sees the string "1289", Alice's expression is either "128+9" or "12+89" or "1+289". These expressions evaluate to 137, 101, and 290. The smallest of those three results is 101.
 
 You are given a String expression that contains the expression on Alice's screen. Compute and return the smallest possible result after inserting the missing plus sign
 */
