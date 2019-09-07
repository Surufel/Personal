/*
 Sifer Aseph
 Selection Sort
 2.2-2
 
 The pseudocode:
 selectionSort(array[n]):
 1. Find the smallest element in the list first then putting it into A[0].
 2. Find the second smallest element in the list then putting it into A[1].
 3. Continue until n-1 is reached.
 4. Return array.
 
 Best-case: Θ(n^2)
 Worst-case: O(n^2)
 */

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

std::vector<int> selectionSort(std::vector<int> &theList) {
    for (int i = 0; i < theList.size(); ++i) {
        int smallIndex = i;
        int temp = 0;
        
        for (int current = i + 1; current < theList.size(); ++current) {
            if (theList[current] < theList[smallIndex]) {
                smallIndex = current;
            }
        }
        
        // Just a practice.
        // Next time: #include <algorithm>
        // Use: std::swap(list[A], list[B]);
        temp = theList[i];
        theList[i] = theList[smallIndex];
        theList[smallIndex] = temp;
    }
    
    return theList;
}

int main() {
    std::vector<int> tastyPie;
    srand(std::time(nullptr));
    int aNumber = 0;
    for (int tenNumbers = 0; tenNumbers < 10; ++tenNumbers) {
        aNumber = rand() & 1000;
        tastyPie.push_back(aNumber);
    }
    /*
     tastyPie.push_back(24);
     tastyPie.push_back(17);
     tastyPie.push_back(5);
     tastyPie.push_back(51);
     tastyPie.push_back(13);
     tastyPie.push_back(1);
     //1, 5, 13, 17, 24, 51
     */
    for (int i = 0; i < tastyPie.size(); ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\nSelect sorting in progress." << std::endl;
    selectionSort(tastyPie);
    
    for (int i = 0; i < tastyPie.size(); ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\n";
    
    return 0;
}
