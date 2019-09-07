/*
 Sifer Aseph
 TopCoder: LuckyCounter
 https://community.topcoder.com/stat?c=problem_statement&pm=11229
 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class LuckyCounter {
public:
    int countLuckyMoments(std::vector<std::string> moments) {
        int occurrences = 0;

        for (size_t i = 0; i < moments.size(); ++i) {
            // AB:BA
            if (moments[i][0] == moments[i][4] && moments[i][1] == moments[i][3]) {
                occurrences++;
            }
            // AA:BB


            // AB:AB

        }

        return occurrences;
    }

};

int main() {
    LuckyCounter example;
    std::cout << example.countLuckyMoments({"12:21", "11:10"}) << std::endl;
}

/*
 Suppose that we're given a moment of time written as HH:MM, where HH is the hour and MM is the minutes. Let's say that this moment is lucky if it is formatted AB:AB, AA:BB or AB:BA, where both occurrences of A stand for the same digit and both occurrences of B also stand for the same digit. It is allowed for the digits represented by A and B to be the same as well.

 You are given a String[] moments, where each element represents a single moment of time. Return how many of these time moments are lucky.
 */
