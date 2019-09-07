/*
 Sifer Aseph
 TopCoder: DerivativeSequence
 https://community.topcoder.com/stat?c=problem_statement&pm=9822
 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <math.h>

class DerivativeSequence {
public:
    std::vector<int> derSeq(std::vector<int> a, int b) {
        std::vector<int> returnVector;

        returnVector = a;

        for (int j = 0; j < b; ++j) {
            std::vector<int> nextItr;
            for (int i = 0; i < returnVector.size() - 1; ++i) {
                nextItr.push_back(returnVector[i+1] - returnVector[i]);
            }

            returnVector.clear();
            returnVector = nextItr;
        }

        for (int j = 0; j < returnVector.size(); ++j) {
            std::cout << returnVector[j] << " ";
        }

        return returnVector;
    }
};

int main() {
    DerivativeSequence example;
    //example.derSeq({5,6,3,9,-1}, 1); // {1, -3, 6, -10}
    example.derSeq({5,6,3,9,-1}, 2); // {-4, 9, -16}

    return 0;
}

/*
 Given a sequence of K elements, we can calculate its difference sequence by taking the difference between each pair of adjacent elements. For instance, the difference sequence of {5,6,3,9,-1} is {6-5,3-6,9-3,-1-9} = {1,-3,6,-10}. Formally, the difference sequence of the sequence a1, a2, ... , ak is b1, b2, ... , bk-1, where bi = ai+1 - ai.

 The derivative sequence of order N of a sequence A is the result of iteratively applying the above process N times. For example, if A = {5,6,3,9,-1}, the derivative sequence of order 2 is: {5,6,3,9,-1} -> {1,-3,6,-10} -> {-3-1,6-(-3),-10-6} = {-4,9,-16}.

 You will be given a sequence a as a int[] and the order n. Return a int[] representing the derivative sequence of order n of a.
 */
