/*
 Sifer Aseph
 Binary Search
 2.3.5
 
 Best-case: O(1)
 Worst-case: O(log n)
 */

#include <iostream>

int binarySearch(int desired, int *theList, int left, int right) {
    int mid = (left + right) / 2;
    
    if (left > right) {
        return -1;
    }
    
    if (theList[mid] == desired) {
        return theList[mid];
    }
    
    if (theList[mid] < desired) {
        return binarySearch(desired, theList, mid + 1, right);
    } else {
        return binarySearch(desired, theList, left, mid - 1);
    }
}

int main() {
    int tastyPie[5];
    tastyPie[0] = 23;
    tastyPie[1] = 34;
    tastyPie[2] = 49;
    tastyPie[3] = 55;
    tastyPie[4] = 91;
    
    
    for (int i = 0; i < 5; ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\nBinary search in progress." << std::endl;
    std::cout << binarySearch(tastyPie[3], tastyPie, 0, 9);
    
    std::cout << "\n";
    
    return 0;
}
