/*
 Sifer Aseph
 Insertion Sort (nonincreasing)
 
 Modified this for CLRS. Solution to 2.1-2.
 
 Best-case: O(n) comparisons, O(1) swaps
 Worst-case: O(n^2) comparisons and swaps
 */

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

std::vector<int> insertionSort(std::vector<int> &aPie) {
    for (int i = 0; i <= aPie.size()-1; ++i) { // loop invariant
        int j = i; // key
        while ((j > 0) && (aPie[j-1] < aPie[j])) {
            int key = aPie[j];
            aPie[j] = aPie[j-1];
            aPie[j-1] = key;
            j = j-1;
        }
    }
    
    return aPie;
}

int main() {
    std::vector<int> tastyPie;
    srand(std::time(nullptr));
    int aNumber = 0;
    for (int tenNumbers = 0; tenNumbers < 10; ++tenNumbers) {
        aNumber = rand() & 1000;
        tastyPie.push_back(aNumber);
    }
    
    for (int i = 0; i < tastyPie.size(); ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\nInsertion sorting in progress." << std::endl;
    insertionSort(tastyPie);
    
    for (int i = 0; i < tastyPie.size(); ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    return 0;
}
