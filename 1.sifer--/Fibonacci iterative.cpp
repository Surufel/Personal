/*
 Sifer Aseph
 Fibonacci (iterative)
 */

#include <iostream>

int fib(int n) {
    int x = 1;
    int y = 0;
    
    for (int i = 1; i < n; i++) {
        x += y;
        y = x - y;
    }
    
    return x;
}

int main() {
    std::cout << fib(100000000000000) << std::endl;
}
