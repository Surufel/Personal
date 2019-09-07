/*
 Sifer Aseph
 Storage
 
 from CEB
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> items;
    
    items.push_back(11);
    items.push_back(22);
    items.push_back(33);
    items.push_back(44);
    items.push_back(50);
    items.push_back(55);
    items.push_back(66);
    items.push_back(77);
    
    items.erase(std::remove_if(items.begin(), items.end(), std::bind2nd(std::greater<int>(), 50)), items.end());
    
    for (int i = 0; i < items.size(); ++i) {
        std::cout << items[i] << std::endl;
    }
    
    return 0;
}
