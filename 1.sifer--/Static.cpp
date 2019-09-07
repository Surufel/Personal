/*
 Sifer Aseph
 Static
 
 from CEB
 */

#include <iostream>

class X {
public:
    int x;
    void f(int z);
};

void X::f(int y) {
    x=y;
}

int main() {
    // static keyword at play here
    // all object instantiated by this class shares one static variable
    // static methods do not have access to non-static members
    // it depends on the goal but one solution is to remove the static keyword from line 13
    
    return 0;
}
