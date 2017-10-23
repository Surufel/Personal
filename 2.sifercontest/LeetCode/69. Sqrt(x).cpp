/*
 Sifer Aseph
 69. Sqrt(x)
 
 Implement int sqrt(int x).
 
 Compute and return the square root of x.
 */

#include <iostream>
#include <cmath>

class Solution {
public:
    int mySqrt(int x) {
        int simple;
        
        simple = pow(x, .5);
        
        return simple;
        
    }
};

/*
 This tests language fluency. [[Surprisingly, my code's runtime beats 62.84% of C++ submissions!]]
 
 Though.. there is a better solution using Newton's method.
 long r = x;
 while (r*r > x)
     r = (r + x/r) / 2;
 return r;
 https://en.wikipedia.org/wiki/Integer_square_root#Using_only_integer_division
 */

int main() {
    Solution test;
    std::cout << test.mySqrt(4) << std::endl;
    
    return 0;
}

