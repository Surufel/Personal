/*
 Sifer Aseph
 File Word Count
 */

#include <iostream>
#include <fstream> // for file handling

int main() {
    // counting words from a file stream:
    std::string line;
    
    int lineCount = 0;
    while (ifs >> line) {
        lineCsount++;
    }
    
    //
    while (ifs) {
        getline(ifs, line);
        std::cout << line;
    }
    
    return 0;
}
