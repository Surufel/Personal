/*
 Sifer Aseph
 Fibonacci (recursion)
 */

#include <iostream>

int recursiveFibonacci(int number);

int main(){
    std::cout << recursiveFibonacci(15) << std::endl;
  
    return 0;
}

int recursiveFibonacci(int number) {
    // base case #1
    if (number == 0) {
        return 0;
    }
    
    // base case #2
    if (number == 1) {
        return 1;
    }
    
    return recursiveFibonacci(number-1) + recursiveFibonacci(number-2);
}
