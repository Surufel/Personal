/*
 Sifer Aseph
 Bubble Sort
 */

#include <iostream>
#include <vector>

std::vector<int> bubbleSort(std::vector<int> &theList) {
    int swapCounter = -1;
    
    while (swapCounter != 0) {
        swapCounter = 0;
        
        for (int i = 0; i < theList.size()-1; ++i) {
            if (theList[i] > theList[i+1]) {
                int temp = theList[i];
                theList[i] = theList[i+1];
                theList[i+1] = temp;
                swapCounter++;
            }
        }
    }
    
    return theList;
}

int main() {
    std::vector<int> start = {99,81,5,23,10,24,29};
    std::vector<int> show;
    show = bubbleSort(start);
    
    for (int i = 0; i < show.size(); ++i) {
        std::cout << show[i] << " ";
    }
    
    std::cout << std::endl;

    return 0;
}
