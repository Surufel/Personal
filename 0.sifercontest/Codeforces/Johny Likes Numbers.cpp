//
//  main.cpp
//  Codeforces
//  Problem A: Johny Likes Numbers
//
//  Created by Sifer Aseph on 6/13/16.
//  Copyright © 2016 Sifer Aseph. All rights reserved.
//

#include <iostream>

int main() {
    int n = 0;
    int k = 0;
    
    std::cin >> n;
    std::cin >> k;
    
    int x = n + 1;
    
    if (n < 1 || k > 1000000000) {
        exit(EXIT_FAILURE);
    }
    
    while (x > n) {
        if ((x % k) == 0) {
            std::cout << x << std::endl;
            return 0;
        } else {
            x++;
        }
    }
    
    return 0;
}

/*
 Last result: Jun/13/2016 19:58 "Time limit exceeded on test 14"
 
 Ah well.
 */