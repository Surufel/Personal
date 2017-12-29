/*
 Sifer Aseph
 TopCoder: TournamentJudging
 https://community.topcoder.com/stat?c=problem_statement&pm=9822
 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <math.h>

class TournamentJudging {
public:
    int getPoints(std::vector<double> rawScores, std::vector<double> conversionFactor) {
        int score = 0;
        for (int i = 0; i < rawScores.size(); ++i) {
            //std::cout << rawScores[i] / conversionFactor[i] << "\n";
            score += round(rawScores[i] / conversionFactor[i]);
        }

        std::cout << score << "\n";
        return score;
    }
};

int main() {
    TournamentJudging example;
    example.getPoints({10, 20, 30}, {10, 10, 5});
    example.getPoints({8, 16, 32}, {10, 10, 5});
    example.getPoints({60, 59}, {24, 24});

    return 0;
}

/*
 You have just been hired to be a judge in the Thought Challenge Olympics. Your task is to calculate an overall score for a competitor based on his performance in a series of events. For each event, you have given him a raw score. The overall score is the sum of the adjusted scores for each event.

 To calculate the adjusted score for an event, divide the raw score by the conversion factor for that event, and round the result to the nearest integer (.5 rounds up). You are given int[]s rawScores and conversionFactors. Element i of rawScores is the raw score you have given for the i-th event, and element i of conversionFactors is the conversion factor for the i-th event. Return the competitor's overall score.
 */
