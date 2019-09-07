/*
 Sifer Aseph
 Operator Overload
 
 from CEB
 */

#include <iostream>

using namespace std;

class A {
    int i;
    
public:
    A (int ii) {
        i = ii;
    }
    
    A (const A& a) {
        i = a.i;
        i++;
    }
    
    A& operator=(const A& a) {
        i = a.i;
        i--;
        return *this;
    }
};

int main() {
    A a(4);
    A b = a;
    
    return 0;
}
