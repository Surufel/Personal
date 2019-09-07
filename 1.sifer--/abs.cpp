/*
 Sifer Aseph
 abs
 
 from CEB
 */

#include <iostream>
#include <string>

int abs(int n) {
    std::cout << "1\n";
    return n;
};

long abs(long n) {
    std::cout << "2\n";
    return n;
};

double abs(double n) {
    std::cout << "3\n";
    return n;
};

float abs(float n) {
    std::cout << "4\n";
    return n;
};

int main() {
    std::cout << abs(-10);
    // int abs gets called
    
    return 0;
}
