/*
 Sifer Aseph
 Guess
 */

#include <iostream>
#include <stdlib.h> // for rand()

void guess();

int main() {
    guess();
    
    return 0;
}

void guess() {
    int number = rand()%100;
    int guess = -1;
    int tryCount = 0;
    
    while (guess != number && tryCount < 8) {
        std::cout << number << std::endl;
        std::cout << "Please enter a guess: " << std::endl;
        std::cin >> guess;
        
        if (guess < number) {
            std::cout << "Too low" << std::endl;
        }
        
        if (guess > number) {
            std::cout << "Too high" << std::endl;
        }
        
        tryCount++;
    }
    
    if (guess == number) {
        std::cout << "You got it" << std::endl;
    } else {
        std::cout << "Sorry, the number was: " << number << std::endl;
    }
    
    return;
}
