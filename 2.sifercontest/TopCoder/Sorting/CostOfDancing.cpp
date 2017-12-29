/*
 Sifer Aseph
 TopCoder: CostOfDancing
 https://community.topcoder.com/stat?c=problem_statement&pm=13195
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

class CostOfDancing {
public:
    std::vector<int> sorting(std::vector<int> &danceCost) {
        for (int i = 0; i <= danceCost.size()-1; ++i) {
            int j = i;
            while ((j > 0) && (danceCost[j-1] > danceCost[j])) {
                int key = danceCost[j];
                danceCost[j] = danceCost[j-1];
                danceCost[j-1] = key;
                j = j-1;
            }
        }
        
        return danceCost;
    }
    
    int minimum(int K, std::vector<int> danceCost) {
        sorting(danceCost);
        
        totalCost = 0; // re-initialize as it is one object :)
        
        for (int i = 0; i < K; ++i) {
            totalCost += danceCost[i];
        }
        
        return totalCost;
    }
    
private:
    int totalCost = 0;
};

int main() {
    CostOfDancing test;
    std::cout << test.minimum(2, {1, 5, 3, 4}) << std::endl; // should return 4
    std::cout << test.minimum(3, {1, 5, 4}) << std::endl; // 10
    
    return 0;
}

/*
 Gustavo studies at the Byteversity (one of the best universities in Byteland). He's also very keen on dancing, so he decided to enroll at a dance school.
 
 The school offers many different courses, each teaching one dance. Different courses may have different costs. You are given a int[] danceCost. The elements of danceCost are the costs of all courses offered at the dance school.
 
 Gustavo would like to learn exactly K of those dances. He is a poor student, so his only priority is to pay as little as possible for the courses.
 
 You are given the int K and the int[] danceCost. Compute and return the smallest possible total cost of learning K dances.
 */
