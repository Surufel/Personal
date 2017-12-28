// Sifer Aseph

#include <iostream>
#include <vector>

int main() {
    int input = 0;
    std::cin >> input;

		int discoverThePattern[101];
		discoverThePattern[1] = 1;
		discoverThePattern[2] = 2;
		discoverThePattern[3] = 4;

		for (int i = 4; i < 101; ++i) {
		  discoverThePattern[i] = i + discoverThePattern[i-2];
		}

		std::cout << discoverThePattern[input] << std::endl;

    return 0;
}
