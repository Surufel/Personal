// Sifer Aseph

#include <iostream>
#include <string>

std::string checker(int weight) {
    if (weight <= 2) {
        return "NO";
    }

    if (weight % 2 == 0) {
        return "YES";
    }

    return "NO";
}

int main() {
    int weight = 0;
    std::cin >> weight;
    std::cout << checker(weight);

    return 0;
}
