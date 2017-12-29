/*
 Sifer Aseph
 TopCoder: KitayutaMart2
 http://community.topcoder.com/stat?c=problem_statement&pm=13650

 K is yen, T is total paid
 One apple sold is K yen, two apples sold is 2 * K yen, three apples sold 2_2 * K yen. The formula is: 2_(i-1) * K yen
 Correction: 2^(i-1) * K yen, not 2_(i-1) * K yen
 With i-th (1 <= i <= n).

 It is also assumed and guaranteed that, within the ranges of T and K, the solution exist and is unique.

 As noted, "This problem statement contains superscripts that may not display properly outside the applet." I did not know there was a power function.. the only problem I had.
 */

#include <iostream>
#include <math.h>

class KitayutaMart2 {
public:
    int numBought(int K, int T) {
        int appleCount = 1;
        if (K >= 80 && K <= 160 && T >= 80 && T <= 163680) {
            for (; T > K; T = T - floor(pow(2, appleCount-1) * K)) {
                //std::cout << "T: " << T << " K: " << K << " " << std::endl;
                appleCount++;
            }
            return appleCount;
        } else {
            exit(EXIT_FAILURE);
        }
    }
};

int main() {
    KitayutaMart2 test;
    std::cout << test.numBought(160, 163680) << std::endl;

    return 0;
}

/*
 Kitayuta Mart is the largest supermarket in Shuseki Kingdom, offering a great variety of food and household products. The main products are fruits, especially apples. The price system is a little special: the original price of an apple is K yen (the currency of the kingdom). However, if a customer wants to buy more than one apple, the second apple will cost 2*K yen, the third apple will cost 22*K yen, and so on. In general, if a customer is buying n apples, the actual price of the i-th (1 <= i <= n) apple will be 2i-1*K yen.
 
 Lun the dog loves apples. She has just bought some number of apples at Kitayuta Mart. The prices of those apples were calculated using the above formula. The total she paid for her apples was T yen. You are given two ints: K and T. Find and return the number of the apples that Lun has bought. It is guaranteed that K and T are such that the answer exists and is unique.
 */
