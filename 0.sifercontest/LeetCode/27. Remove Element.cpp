/*
 Sifer Aseph
 27. Remove Element
 
 Given an array and a value, remove all instances of that value in place and return the new length.
 
 Do not allocate extra space for another array, you must do this in place with constant memory.
 
 The order of elements can be changed. It doesn't matter what you leave beyond the new length.
 */

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        
        int size = nums.size();
        
        return size;
    }
};

/*
 This only tests language fluency. Just use C++'s .erase() method from <algorithm>. There are two more solutions, either brute force or binary search should work.
 */

int main() {
    Solution test;
    std::vector<int> stuff = {3, 2, 2, 3};
    test.removeElement(stuff, 3);
    
    return 0;
}

/*
 Given input array nums = [3,2,2,3], val = 3
 
 Your function should return length = 2, with the first two elements of nums being 2.
 */

