/*
 Sifer Aseph
 1.1
 Find duplicate character in a string.
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    // Method 1
    // Easiest. I got lazy.
    std::string test1 = "tests";
    std::vector<char> storage;
    
    storage.push_back(test1[0]);
    for (int i = 0; i < test1.length(); ++i) {
        if (std::find(storage.begin(), storage.end(), test1[i]) != storage.end()) {
            
        } else {
            std::cout << "found: " << test1[i]; // This would print 's'. Do stuff lazily.
        }
    }
    
    // Method 2
    // We discussed the second method and were unable to come up with one that does NOT use pivot which would cause it to grow to O(n^2). Or simply, one that does not use a data structure and is better than O(n^2).
    
    return 0;
}
