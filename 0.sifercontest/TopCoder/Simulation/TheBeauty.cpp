/*
 Sifer Aseph
 TopCoder: TheBeauty
 https://community.topcoder.com/stat?c=problem_statement&pm=10233
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <map>

class TheBeauty {
public:
    int find (int n) {
        if (n < 10) {
            return 1;
        }
        
        digits.clear();
        
        if (n >= 10) {
            while (n != 0) {
                int digit = n % 10;
                n /= 10;
                
                if (std::find(digits.begin(), digits.end(), digit) != digits.end()) {
                    
                } else {
                    digits.push_back(digit);
                }
                
            }
        }
        
        return digits.size();
    }
    
private:
    std::vector<int> digits;
};

int main() {
    TheBeauty test;
    
    std::cout << test.find(7) << std::endl; // should return 1
    std::cout << test.find(100) << std::endl; // 2
    std::cout << test.find(123456789) << std::endl; // 9
    std::cout << test.find(1000000000) << std::endl; // 2
    
    return 0;
}

/*
 There is nothing more beautiful than just an integer number.
 
 The beauty of an integer is the number of distinct digits it contains in decimal notation.
 
 You are given an integer number n. Return the beauty of this number.
 */
