// Sifer Aseph

#include <iostream>
#include <string>

int main() {
    std::string firstName, lastName;
    std::cin >> firstName >> lastName;
    std::string fullName = firstName + " " + lastName;

    std::string loginName = "";

    // harry potter should produce "hap"

    loginName = firstName[0];

    for (int i = 1; i < firstName.length() && firstName[i] < lastName[0]; ++i) {
        loginName += firstName[i];
    }

    loginName += lastName[0];

    std::cout << loginName;

    return 0;
}
