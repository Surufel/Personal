/*
 Sifer Aseph
 26. Remove Duplicates from Sorted Array
 
 Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
 
 Do not allocate extra space for another array, you must do this in place with constant memory.
 
 For example,
 Given input array nums = [1,1,2],
 
 Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.
 */

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int count = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                nums[i - count] = nums[i];
            }
        }
        
        return nums.size() - count;
    }
};

/*
 This tests logic. The solution only requires simple comparisons and increase or decrease count as needed.
 */

int main() {
    Solution test;
    std::vector<int> stuff = {1, 1, 2};
    std::cout << test.removeDuplicates(stuff) << std::endl;;
    
    return 0;
}
