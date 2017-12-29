/*
 Sifer Aseph
 TopCoder: BiggestRectangleEasy
 https://community.topcoder.com/stat?c=problem_statement&pm=6677
 */

#include <iostream>
#include <vector>
#include <math.h>

class BiggestRectangleEasy {
public:
    int findArea(int N) {
        int theN = N/2;
        int vertex = (-theN)/(2 * -1);
        
        area = -(vertex * vertex) + theN * vertex;
        
        return area;
    }
private:
    int area = 0;
};

int main() {
    BiggestRectangleEasy test;
    std::cout << test.findArea(11) << std::endl; // should return 6
    std::cout << test.findArea(5) << std::endl; // 1
    std::cout << test.findArea(64) << std::endl; // 256
    
    return 0;
}

/*
 Little Josh has found several sticks that are each 1 inch long. He wants to form a rectangle with the biggest possible area, using these sticks as the perimeter. He is allowed to glue sticks together, but he is not allowed to break a single stick into multiple shorter sticks.
 
 For example, if Josh has 11 sticks, he can create a 2 x 3 rectangle using 10 sticks. This rectangle has an area of 6 square inches, which is the biggest area that can be achieved in this case.
 
 You will be given an int N, and you must return the maximal area (in square inches) of a rectangle that can be created using N or less sticks.
 */
