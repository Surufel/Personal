/*
 Sifer Aseph
 collatzConjecture
 https://en.wikipedia.org/wiki/3x_%2B_1_problem
 "Does the 3x + 1 sequence eventually reach 1 for all positive integer initial values?"
 */

#include <iostream>

int collatzConjecture(int number);

int main() {
    
    
    return 0;
}

int collatzConjecture(int number) {
    if (number == 1) {
        return 0;
    }
    
    if (number % 2 == 0) {
        return number / 2;
    }
    
    if (number % 2 != 0) {
        return 3 * number + 1;
    }
}
