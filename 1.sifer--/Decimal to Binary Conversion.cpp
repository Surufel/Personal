/*
 Sifer Aseph
 Decimal to Binary Conversion
 */

#include <iostream>

int decimalToBinary(int decimalNumber) {
    int remainder, i, sum;
    remainder = sum = 0;
    i = 1;
    
    while (decimalNumber > 0) {
        remainder = decimalNumber % 2;
        sum = sum + (i * remainder);
        decimalNumber = decimalNumber / 2;
        i = i * 10;
    }
    
    return sum;
}

int main() {
    std::cout << decimalToBinary(10) << std::endl;
    
    return 0;
}
