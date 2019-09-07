/*
 Sifer Aseph
 TopCoder: Genetics
 
 200 Points
 
 D = dominant
 R = recessive
 */

#include <iostream>
#include <string>

class Genetics {
public:
    std::string getOffspring (std::string g1, std::string g2, std::string dom) {
        std::string combined;
        if (g1.length() == g2.length() && dom.length() == g1.length() && dom.length() == g2.length() && dom.length() >= 1 && dom.length() <= 50) {
            for (int i = 0; i < dom.size(); ++i) {
                if (g1[i] == g2[i]) {
                    combined += g1[i];
                } else if (g1[i] != g2[i] && dom[i] == 'D') {
                    combined += g1[i];
                } else if (g1[i] != g2[i] && dom[i] == 'R') {
                    combined += g2[i];
                }
            }
            
        } else {
            exit(EXIT_FAILURE);
        }
        
        return combined;
    }
};

int main () {
    // Remove before submitting.
    
    Genetics test;
    std::cout << test.getOffspring("AAAA", "AAaa", "DRDR") << std::endl;
    std::cout << test.getOffspring("ABCDEFG", "abcdefg", "DDRRRDR") << std::endl;
    std::cout << test.getOffspring("Z", "z", "D") << std::endl;
    
    return 0;
}

// Submission was successful for 139.30 points.

/*
 
 */
