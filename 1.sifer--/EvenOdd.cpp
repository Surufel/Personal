/*
 Sifer Aseph
 EvenOdd
 */

#include <iostream>

void evenodd();

int main() {
    evenodd();
    
    return 0;
}

void evenodd() {
    std::cout << "Enter a number to test: ";
    int test = 0;
    std::cin >> test;
    
    if (test % 2 == 0) {
        std::cout << "This is an even number." << std::endl;
        
    } else {
        std::cout << "This is an odd number." << std::endl;
    }
    
    return;
}
