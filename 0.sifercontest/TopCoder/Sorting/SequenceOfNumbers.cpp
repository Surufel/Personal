/*
 Sifer Aseph
 TopCoder: SequenceOfNumbers
 https://community.topcoder.com/stat?c=problem_statement&pm=4659
 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class SequenceOfNumbers {
public:
    std::vector<int> sorting(std::vector<int> &sequenceInt) {
        for (int i = 0; i < sequenceInt.size() - 1; ++i) {
            int min = i;

            for (int j = i + 1; j < sequenceInt.size(); ++j) {
                if (sequenceInt.at(j) < sequenceInt.at(min)) {
                    min = j;
                }
            }

            std::swap (sequenceInt.at(min), sequenceInt.at(i));
        }

        //for (int i = 0; i < sequenceInt.size(); ++i) {
        //    std::cout << sequenceInt[i] << " ";
        //}

        return sequenceInt;
    }

    std::vector<std::string> rearrange(std::vector<std::string> sequence) {
        std::vector<int> sequenceInt;
        for (size_t i = 0; i < sequence.size(); ++i) {
            sequenceInt.push_back(stoi(sequence[i]));
        }

        sorting(sequenceInt);

        std::vector<std::string> finalSequence;
        for (size_t j = 0; j < sequenceInt.size(); ++j) {
            finalSequence.push_back(std::to_string(sequenceInt[j]));
        }

        return finalSequence;
    }
};

int main() {
    SequenceOfNumbers example;
    example.rearrange({"1","174","23","578","71","9"});

    return 0;
}

/*
 It is a common mistake to sort numbers as strings. For example, a sorted sequence like {"1", "174", "23", "578", "71", "9"} is not correctly sorted if its elements are interpreted as numbers rather than strings.

 You will be given a String[] sequence that is sorted in non-descending order using string comparison. Return this sequence sorted in non-descending order using numerical comparison instead.
 */
