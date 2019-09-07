/*
 Sifer Aseph
 TopCoder: BuyingCheap
 https://community.topcoder.com/stat?c=problem_statement&pm=4754
 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>

class BuyingCheap {
public:
    std::vector<int> sorting(std::vector<int> &prices) {
        for (int i = 0; i < prices.size() - 1; ++i) {
            int min = i;

            for (int j = i + 1; j < prices.size(); ++j) {
                if (prices.at(j) < prices.at(min)) {
                    min = j;
                }
            }

            std::swap (prices.at(min), prices.at(i));
        }

        //for (int i = 0; i < prices.size(); ++i) {
        //    std::cout << prices[i] << " ";
        //}

        return prices;
    }

    int thirdBestPrice(std::vector<int> prices) {
        if (prices.size() < 3) {
            std::cout << "No.\n";
            return -1;
        }

        sorting(prices);
        int third = 0;
        int count = 0;

        for (int i = 1; i < prices.size() && count != 2; ++i) {
            if (prices[third] == prices[i]) {
                third = i;
            } else if (prices[third] < prices[i]) {
                third = i;
                ++count;
            }
        }

        if (count < 2) {
            std::cout << "No.\n";
            return -1;
        }

        std::cout << prices[third] << "\n";
        return prices[third];
    }
};

int main() {
    BuyingCheap example;
    example.thirdBestPrice({10, 40, 50, 20, 70, 80, 30, 90, 60});
    example.thirdBestPrice({10, 10, 10, 10, 20, 20, 30, 30, 40, 40});
    example.thirdBestPrice({80, 90, 80, 90, 80});
    example.thirdBestPrice({10});

    return 0;
}

/*
 Steve would like to buy a new car. He isn't wealthy, so he would prefer a reasonably cheap car. The only problem is that the quality of the cheapest cars is... let's say questionable.

 Thus Steve decided to make a list of car prices and to buy a car with the third lowest price.

 You will be given a int[] prices. The same price may occur multiple times in prices, but it should count only once in the ordering of available prices. See Example 1 for further clarification.

 Write a function that returns the third lowest price in this list. If there are less than three different car prices in prices, your method should return -1.
 */
