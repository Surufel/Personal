/*
 Sifer Aseph
 TopCoder: ImageCompression
 SRM 715
 */

#include <iostream>
#include <string>
#include <vector>

class ImageCompression {
public:
    std::string isPossible(std::vector<std::string> image, int k) {
        size_t n = image.size();
        size_t m = image[0].length();
        if (k == image[0].length()) {
            return "Impossible";
        }
        
        if (n % k != 0 || m % k != 0) {
            return "Impossible";
        }
    
        std::string ideal1 = "";
        std::string ideal0 = "";
        for (int step = 0; step < k; ++step) {
            ideal1 += "1";
            ideal0 += "0";
        }
        
        //std::cout << ideal1 << " and " << ideal0 << std::endl;
        /*
        for (size_t i = 0; i < image.size(); i+=k) {
            if (image[i].substr(i, k) == ideal1 || image[i].substr(i, k) == ideal0) {
                return "Possible";
            } else if (image[i].substr(i, k) != ideal1 || image[i].substr(i, k) != ideal0) {
                return "Impossible";
            }
        }*/
        
        bool theTest = false;
        for (size_t i = 0; i < image.size(); i+=k) {
            if (image[i].substr(i, k) == ideal1 || image[i].substr(i, k) == ideal0) {
                theTest = true;
            } else if (image[i].substr(i, k) != ideal1 || image[i].substr(i, k) != ideal0) {
                theTest = false;
            }
        }
        
        if (theTest == true) {
            return "Possible";
        } else {
            return "Impossible";
        }
        
        // { string test = "example"; string a = test.substr(0, 2); cout << a; string b = test.substr(2, 2); cout << ' ' << b; }
        
        return "Maybe"; // If this is returned, it means I missed a case.
    }
    
};

int main() {
    ImageCompression test;
    
    std::cout << test.isPossible({ "0011", "0011", "1100", "1100", "0010", "0000" }, 2) << std::endl; // should be impossible
    std::cout << test.isPossible({ "111000111", "111000111", "111000111" }, 3) << std::endl; // possible
    std::cout << test.isPossible({ "001100", "001100", "110011", "110011", "001100", "001100" }, 6) << std::endl; // impossible
    std::cout << test.isPossible({ "0011", "0011", "1100", "1100", "0000", "0000" }, 2) << std::endl; // impossible
    std::cout << test.isPossible({ "11111111", "11111111", "11111111", "11111111", "11111111", "11111111", "11111111", "11111111" }, 4) << std::endl; // possible
    
    return 0;
}

/*
 
 */
