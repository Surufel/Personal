/*
 Sifer Aseph
 quick simple logic test
 */

#include <iostream>

void simpleLogicTest();

int main() {
    
    return 0;
}

void simpleLogicTest() {
    int x = 4;
    int y = 9;
    
    if (x > 0 && y != 2) std::cout << "yes" << std::endl; else std::cout << "no" << std::endl;
    if (x < 0 || y != 2) std::cout << "yes" << std::endl; else std::cout << "no" << std::endl;
    if (!(y < 10)) std::cout << "yes" << std::endl; else std::cout <<"no" << std::endl;
}
