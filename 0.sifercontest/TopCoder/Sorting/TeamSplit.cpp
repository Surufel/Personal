/*
 Sifer Aseph
 TopCoder: TeamSplit
 https://community.topcoder.com/stat?c=problem_statement&pm=4564
 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <cmath>

class TeamSplit {
public:
    std::vector<int> sorting(std::vector<int> &strengths) {
        for (int i = 0; i < strengths.size() - 1; ++i) {
            int min = i;

            for (int j = i + 1; j < strengths.size(); ++j) {
                if (strengths.at(j) < strengths.at(min)) {
                    min = j;
                }
            }
            std::swap (strengths.at(min), strengths.at(i));
        }

        //for (int i = 0; i < strengths.size(); ++i) {
        //    std::cout << strengths[i] << " ";
        //}

        return strengths;
    }

    int difference(std::vector<int> strengths) {
        sorting(strengths);

        // if there is only one player on the roster
        if (strengths.size() == 1) {
            std::cout << strengths[0] << "\n";
            return strengths[0];
        }

        // if there are two players on the roster
        if (strengths.size() == 2) {
            std::cout << strengths[1] - strengths[0] << "\n";
            return strengths[1] - strengths[0];
        }

        //std::vector<int> firstTeam;
        int firstTeamSum = 0;
        //std::vector<int> secondTeam;
        int secondTeamSum = 0;

        for (int i = 0; i < strengths.size(); ++i) {
            if (i % 2 == 0) {
                firstTeamSum += strengths[i];
            } else {
                secondTeamSum += strengths[i];
            }
        }

        std::cout << abs(firstTeamSum - secondTeamSum) << std::endl;

        return firstTeamSum - secondTeamSum;
    }
};

int main() {
    TeamSplit example;
    example.difference({5,7,8,4,2});
    example.difference({100});
    example.difference({1000, 1000});
    example.difference({9,8,7,6});

    return 0;
}

/*
 You want to split some people into two teams to play a game. In order to make the split, you first designate two team captains who take alternate turns selecting players for their teams. During each turn, the captain selects a single player for his team. Since each captain wants to make the strongest possible team, he will always select the best available player. The players have strengths, which are given in the int[] strengths, where higher numbers indicate better players. After all the players have been selected, the team strength is computed as the sum of the strengths of the players on that team.

 For example, if strengths={5,7,8,4,2}, then the first captain selects the player with strength 8 for his team, the second captain gets the player with strength 7, the first gets the one with strength 5, the second the one with strength 4, and the last one (strength 2) goes to the first team. The first team now has a total strength 8+5+2=15, and the second team has strength 7+4=11.

 Return the absolute strength difference between the two teams. For the example above you should return 4 (=15-11).
 */
