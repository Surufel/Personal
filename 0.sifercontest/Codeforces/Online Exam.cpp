//
//  main.cpp
//  Codeforces
//  Problem A: Online Exam
//
//  Created by Sifer Aseph on 6/20/16.
//  Copyright © 2016 Sifer Aseph. All rights reserved.
//

#include <iostream>
#include <random>

int main() {
    int n = 5000;
    int x = 0;
    int k = 2000;
    std::default_random_engine generator;
    
    std::uniform_int_distribution<int> distribution(1, 100);
    int attempts = distribution(generator);
    
    for (; x < attempts; ++x) {
        for (int y = 0; y < k; ++y) {
            std::uniform_int_distribution<int> distribution(0, 1);
            int binaryDistribution = distribution(generator);
            std::cout << binaryDistribution;
        }
        
        std::cout << "\n";
    }
        
    return 0;
}

/*
 Last result: Jun/20/2016 07:35:02 "Partial result: 0 points"
 
 Hm...
 */