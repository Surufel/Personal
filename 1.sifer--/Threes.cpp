/*
 Sifer Aseph
 Threes
 */

#include <iostream>

void threes();

int main() {
    threes();
    
    return 0;
}

void threes() {
    int mul = 0;
    
    while (mul < 30) {
        // Comment out one line at a time to decrement in times table.
        mul += 3; // 3 times table
        mul += 3; // 6 times table
        mul += 3; // 9 times table
        mul += 3; // 12 times table
        std::cout << mul << std::endl;
    }
    
    return;
}
