/*
 Sifer Aseph
 1. Two Sum
 
 Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 
 You may assume that each input would have exactly one solution, and you may not use the same element twice.
 */

#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> returnMe;
        
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target && i != j) {
                    returnMe.push_back(i);
                    returnMe.push_back(j);
                    return returnMe;
                }
            }
        }
        
        return returnMe;
    }
};

/*
 This problem tests logic and basic language fluency (nested for loops). This brute force approach has a time complexity of O(n^2).
 It loops through the vector and for each element in the vector, it compares with the next until the sum is found or until the end of vector.
 */

int main() {
    Solution test;
    std::vector<int> use1 = {2, 7, 11, 15};
    std::vector<int> loopMe1 = test.twoSum(use1, 9);
    for (int i = 0; i < loopMe1.size(); ++i) {
        std::cout << loopMe1[i] << std::endl;
    }
    
    std::vector<int> use2 = {3,2,3};
    std::vector<int> loopMe2 = test.twoSum(use2, 6);
    for (int i = 0; i < loopMe2.size(); ++i) {
        std::cout << loopMe2[i] << std::endl;
    }
    
    std::vector<int> use3 = {2,5,5,11};
    std::vector<int> loopMe3 = test.twoSum(use3, 10);
    for (int i = 0; i < loopMe3.size(); ++i) {
        std::cout << loopMe3[i] << std::endl;
    }
    
    return 0;
}

/*
 Given nums = [2, 7, 11, 15], target = 9,
 
 Because nums[0] + nums[1] = 2 + 7 = 9,
 return [0, 1].
 */

