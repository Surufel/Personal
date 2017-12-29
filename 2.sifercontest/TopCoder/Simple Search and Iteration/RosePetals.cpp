/*
 Sifer Aseph
 TopCoder: RosePetals
 https://community.topcoder.com/stat?c=problem_statement&pm=6635
 */

#include <iostream>
#include <vector>
#include <string>

class RosePetals {
public:
    int getScore(std::vector<int> dice) {
        int score = 0;

        for (int i = 0; i < dice.size(); ++i) {
            if (dice[i] == 3) {
                score += 2;
            }

            if (dice[i] == 5) {
                score += 4;
            }
        }

        return score;
    }

private:

};

int main() {
    RosePetals example;
    std::vector<int> first = {4, 4, 5, 6, 5};
    std::cout << example.getScore(first) << std::endl;

    return 0;
}

/*
"Petals Around the Rose" is a pretty well known logic game. A person who knows the game rolls five dice and then says a number. The other players must guess the rule used to obtain that number. We will not ask you to play this game because it's a tricky one. We will simply tell you that the rule is to sum the number of dots that are around the center dot of each die, like the petals around a rose. If a die has no dot in the center, it has no petals. The face of the die labeled with 1 dot has 0 petals, the face with 2 dots has 0 petals, the face with 3 dots has 2 petals, the face with 4 dots has 0 petals, the face with 5 dots has 4 petals and finally the face with 6 dots has 0 petals as can be seen in the picture.
 */
