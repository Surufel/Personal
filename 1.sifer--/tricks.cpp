/*
 Sifer Aseph
 tricks
 */

#include <iostream>

int main() {
    // bitwise AND operator
    int num = 5; // 101
    if (num & 1) { // 101 + 1
        std::cout << "odd" << "\n";
    } else {
        std::cout << "even" << "\n";
    }
    
    // bit shift
    num = num << 1;   // Multiply n with 2
    std::cout << num << "\n";
    num = num >> 1;   // Divide n by 2
    std::cout << num << "\n";
    
    // avoid strlen()
    int charArray[3];
    for (int i = 0; charArray[i]; ++i) {
    }
    // loop breaks when the character array ends
    
    // ranged for loops
    //for (const auto &value : vec)
    //    cout << value << ' ';
    
    // are all of the elements positive?
    //all_of(first, first+n, ispositive());
    // is there at least one positive element?
    //any_of(first, first+n, ispositive());
    // are none of the elements positive?
    //none_of(first, first+n, ispositive());
    
    return 0;
}
