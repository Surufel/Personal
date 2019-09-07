/*
 Sifer Aseph
 TopCoder: FolderSize
 
 500 Points
 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>

class FolderSize {
public:
    std::vector<int> calculateWaste(std::vector<std::string> files, int folderCount, int clusterSize) {
        std::vector<int> wasted;
        std::string folder, size;
        int folderSize[folderCount];
        
        for (int z = 0; z < folderCount; ++z) {
            folderSize[z] = 0;
        }
        
        if (clusterSize >= 1 && clusterSize <= 1000000 && folderCount >= 1 && folderCount <= 50 && files.size() <= 50) {
            for (int i = 0; i < files.size(); ++i) {
                if (files[i].length() >= 3 && files[i].length() <= 50) {
                    std::istringstream wholeFile(files[i]);
                    
                    while (wholeFile >> folder >> size) {
                        int leftover = clusterSize - std::stoi(size);
                        
                        if (leftover < 0) {
                            int wastedLeftover = clusterSize - abs(leftover);
                            folderSize[i] += wastedLeftover;
                        } else if (leftover >= 0) {
                            folderSize[i] += leftover;
                        }
                    }
                }
            }
        }
        
        if (files.empty()) {
            int emptyCount = 0;
            while (emptyCount < folderCount) {
                wasted.push_back(0);
                emptyCount++;
            }
        } else {
            int fillingCount = 0;
            while (fillingCount < folderCount) {
                wasted.push_back(folderSize[fillingCount]);
                fillingCount++;
            }
        }
        
        return wasted;
    }
};

int main () {
    FolderSize test;
    
    std::vector<int> tested1 = test.calculateWaste({"0 185"}, 1, 50);
    for (int i = 0; i < tested1.size(); ++i) {
        std::cout << tested1[i] << std::endl;
    }
    
    /*
     std::vector<int> tested1 = test.calculateWaste({"0 55", "0 47", "1 86"}, 3, 50);
     for (int i = 0; i < tested1.size(); ++i) {
     std::cout << tested1[i] << std::endl;
     }
     
     std::vector<int> tested2 = test.calculateWaste({"0 123", "2 456", "4 789", "6 012", "8 345"}, 10, 98);
     for (int i = 0; i < tested2.size(); ++i) {
     std::cout << tested2[i];
     }
     */
    
    //std::vector<int> tested3 = test.calculateWaste({}, 5, 100);
    //for (int i = 0; i < tested3.size(); ++i) {
    //    std::cout << tested3[i] << std::endl;
    //}
    
    return 0;
}

// Incomplete.

/*
 Self note: So here is the lesson. I don't want to spend more time than I needed (in general, for harder problems, no more than 6 hours).
 I looked up the solution and asked around. I need to refactor my solution. Tested various numbers and the calculation didn't come out correct. I need to use %. The only case that came out correct is when there is nothing in the vector input.
 
 The editorial makes for an interesting read: http://community.topcoder.com/tc?module=Static&d1=match_editorials&d2=srm218
 */

/*

 */
