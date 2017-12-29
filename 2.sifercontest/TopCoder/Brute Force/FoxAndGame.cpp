/*
 Sifer Aseph
 TopCoder: FoxAndGame
 https://community.topcoder.com/stat?c=problem_statement&pm=12438
 */

#include <iostream>
#include <string>
#include <vector>
#include <string.h>

class FoxAndGame {
public:
    int countStars(std::vector<std::string> result) {
        int score = 0;

        for (int i = 0; i < result.size(); ++i) {
            for (auto itrChar : result[i]) {
                if (itrChar == 'o') {
                    score++;
                }
            }
        }

        return score;
    }
};

int main() {
    FoxAndGame example;
    std::cout << example.countStars({"ooo","ooo"}) << std::endl;

    return 0;
}

/*
    Fox Ciel is playing the popular game 'Cut the Rope' on her smartphone. The game has multiple stages, and for each stage the player can gain between 0 and 3 stars, inclusive. You are given a String[] result containing Fox Ciel's current results: For each stage, result contains an element that specifies Ciel's result in that stage. More precisely, result[i] will be "---" if she got 0 stars in stage i, "o--" if she got 1 star, "oo-" if she got 2 stars and "ooo" if she managed to get all 3 stars. Return the total number of stars Ciel has at the moment.
 */
