/*
 Sifer Aseph
 Linear Search
 2.1.3
 
 Best-case: Θ(n)
 Worst-case: O(n)
 */

#include <iostream>
#include <vector>

int search(int v, std::vector<int> tastyPie) {
    for (int i = 0; i < tastyPie.size(); ++i) {
        if (v == tastyPie[i]) {
            return i;
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
