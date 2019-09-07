/*
 Sifer Aseph
 Binary Addition
 2.1-4
 
 I need to improve this solution. The next re-do of this solution will have a modulus instead.
 
 The pseudocode:
 binaryAddition(A, B) {
    1. An array int C is initialized to the size length of A or B, whichever is greater
    2. initialize an int carry to 0
    3. For each element in A, set C to add the element in (A + B + carry) % 2
    4. Carry shall be set to to element in (A + B + carry) / 2
    5. The last element index of C shall be set to carry
    6. Return C
 }
 */

#include <iostream>
#include <bitset> // aka bit array
// http://en.cppreference.com/w/cpp/utility/bitset

int binaryAddition(std::string firstBit, std::string secondBit) { // Well, I learned that template parameter has to be compile-time, not run-time.
    std::bitset<4> const a(firstBit);
    std::bitset<4> const b(secondBit);
    int c[5];
    int carry = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (a[i] + b[i] + carry == 3) {
            c[i] = 1;
            carry = 1;
        }
        
        if (a[i] + b[i] + carry == 2) {
            c[i] = 0;
            carry = 1;
        }
        
        if (a[i] + b[i] + carry == 1) {
            c[i] = 1;
            carry = 0;
        }
        
        if (a[i] + b[i] + carry == 0) {
            c[i] = 0;
            carry = 0;
        }
    }
    
    c[4] = carry;
    
    for (int j = 4; j >= 0; j--) {
        std::cout << c[j];
    }
    
    std::cout << "\n";
    
    return 0;
}

int main() {
    binaryAddition("1001","1111"); // should result in 11000
    
    return 0;
}
