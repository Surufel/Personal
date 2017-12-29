/*
 Sifer Aseph
 TopCoder: LittleElephantAndBooks
 https://community.topcoder.com/stat?c=problem_statement&pm=12112
 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class LittleElephantAndBooks {
public:
    std::vector<int> sortBook(std::vector<int> &pages) {
        for (int i = 0; i < pages.size() - 1; ++i) {
            int min = i;

            for (int j = i + 1; j < pages.size(); ++j) {
                if (pages.at(j) < pages.at(min)) {
                    min = j;
                }
            }

            std::swap (pages.at(min), pages.at(i));
        }

        return pages;
    }

    int getNumber(std::vector<int> pages, int numbers) {
        int totalRead = pages[numbers];

        sortBook(pages);

        for (size_t i = 0; i < numbers - 1; ++i) {
            totalRead += pages[i];
        }

        return totalRead;
    }

};

int main() {
    LittleElephantAndBooks example;
    std::cout << example.getNumber({1,2}, 1) << std::endl;
    std::cout << example.getNumber({74, 7, 4, 47, 44}, 3) << std::endl;

    return 0;
}

/*
 Little Elephant from the Zoo of Lviv has a bunch of books. You are given a int[] pages. Each element of pages is the number of pages in one of those books. There are no two books with the same number of pages.

 You are also given a int number. As a homework from the teacher, Little Elephant must read exactly number of his books during the summer. (Little Elephant has strictly more than number books.)

 All other elephants in the school also got the exact same homework. Little Elephant knows that the other elephants are lazy: they will simply pick the shortest number books, so that they have to read the smallest possible total number of pages. Little Elephant wants to be a good student and read a bit more than the other elephants. He wants to pick the subset of books with the second smallest number of pages. In other words, he wants to pick a subset of books with the following properties:

 There are exactly number books in the chosen subset.
 The total number of pages of those books is greater than the smallest possible total number of pages.
 The total number of pages of those books is as small as possible (given the above conditions).
 Return the total number of pages Little Elephant will have to read.
 */
