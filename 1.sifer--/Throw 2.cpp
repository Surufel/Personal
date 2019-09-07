/*
 Sifer Aseph
 Throw 2
 
 from CEB
 */

#include <iostream>
#include <string>

void foo() {
    throw 5;
}

int main() {
    int i;
    
    try {
        foo();
    }
    
    catch (std::bad_alloc e) {
        i = 1;
    }
    
    catch (std::string e) {
        i = 2;
    }
    
    catch (double e) {
        i = 3;
    }
    
    catch (int e) {
        i = 4;
    }
    
    catch (bool e) {
        i = 5;
    }
    
    std::cout << i;
    
    return 0;
}
