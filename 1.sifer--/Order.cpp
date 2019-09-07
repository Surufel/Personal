/*
 Sifer Aseph
 Order
 
 from CEB
 */

#include <iostream>
#include <string>

void Order() {
    int i, j;
    std::string s;
    
    std::cin >> i >> j >> s >> s >> i;
    std::cout << i << " " << j << " " << s << " " << i;
}

int main() {
    Order();
    // if input: "1 2 hello world 3"
    // then output: "3 2 world 3"
    
    return 0;
}
