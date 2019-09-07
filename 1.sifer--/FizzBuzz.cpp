/*
 Sifer Aseph
 FizzBuzz
 
 Write a program that prints the numbers from 1 to 100. But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”. For numbers which are multiples of both three and five print “FizzBuzz”.
 */

#include <iostream>

int main() {
    for (size_t i = 1; i <= 100; ++i) {
        if (i % 3 == 0) {
            std::cout << i << ": Fizz\n";
        }
        if (i % 5 == 0) {
            std::cout << i << ": Buzz\n";
        }
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << i << ": FizzBuzz\n";
        }
    }
    
    return 0;
}
