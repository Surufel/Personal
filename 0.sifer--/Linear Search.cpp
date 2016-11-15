/*
 Sifer Aseph
 Linear Search
 2.1.3
 */

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

int search(int v, std::vector<int> tastyPie) {
    for (int i = 0; i < tastyPie.size(); ++i) {
        if (v == tastyPie[i]) {
            return tastyPie[i];
        }
    }
    
    return 0;
}

int main() {
    std::vector<int> tastyPie;
    tastyPie.push_back(5);
    tastyPie.push_back(129);
    tastyPie.push_back(73);
    
    std::cout << search(129, tastyPie) << std::endl;
    
    return 0;
}
