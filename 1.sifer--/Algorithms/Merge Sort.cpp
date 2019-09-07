/*
 Sifer Aseph
 Merge Sort
 
 Best-case: O(n log n)
 Worst-case: O(n log n)
 
 Using smart pointers or vectors next time.
 */

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void merge(int *, int, int, int);

void mergeSort(int *theList, int low, int high) {
    int mid;
    
    if (low < high) { // base case check
        mid = floor((low + high) / 2); // divide
        mergeSort(theList, low, mid); // conquer
        mergeSort(theList, mid+1, high); // conquer
        merge(theList, low, mid, high); // conquer
    }
}

void merge(int *theList, int low, int mid, int high) { // p, q, r in some literature
    int lowIndex = 0, midIndex = 0, highIndex = low, newList[1000]; // i, j, k in some literature
    
    int *leftList = nullptr;
    int *rightList = nullptr;
    
    int n1 = mid - low + 1; // CLRS
    int n2 = high - mid; // CLRS
    
    leftList = new int[n1];
    rightList = new int[n2];
    
    for (int step = 0; step < n1; ++step) {
        leftList[step] = theList[low + step];
    }
    
    for (int step = 0; step < n2; ++step) {
        rightList[step] = theList[mid + step + 1];
    }
    
    while (lowIndex < n1 && midIndex < n2) {
        if (leftList[lowIndex] < rightList[midIndex]) {
            theList[highIndex] = leftList[lowIndex];
            lowIndex++;
        } else {
            theList[highIndex] = rightList[midIndex];
            midIndex++;
        }
        
        highIndex++;
    }
    
    while (lowIndex < n1) {
        theList[highIndex] = leftList[lowIndex];
        lowIndex++;
        highIndex++;
    }
    
    while (midIndex < n2) {
        theList[highIndex] = rightList[midIndex];
        midIndex++;
        highIndex++;
    }
    
    delete [] leftList;
    delete [] rightList;
}

int main() {
    int tastyPie[10];
    srand(std::time(nullptr));
    int aNumber = 0;
    for (int tenNumbers = 0; tenNumbers < 10; ++tenNumbers) {
        aNumber = rand() & 1000;
        tastyPie[tenNumbers] = aNumber;
    }
    
    for (int i = 0; i < 10; ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\nMerge sorting in progress." << std::endl;
    mergeSort(tastyPie, 0, 9);
    
    for (int i = 0; i < 10; ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\n";
    
    return 0;
}
