/*
 Sifer Aseph
 Special Password Generator
 
 I went to a cybersecurity workshop about passwords and decided to write my own password generator right there and then.
 There are only two things left to do but I'll do them when I get the time.
 Lots of room for improvement later on but I think this is very good.
 */

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <limits>

int randomizer() {
    const int absoluteMaxToTry = 11; // this should reflect the number of lines in words.txt

    srand(static_cast<unsigned int>(time(NULL)));

    int randomed = rand() % absoluteMaxToTry + 1;

    return randomed;
}

std::vector<std::string> pusher(int theNumber, std::fstream &theFile) {
    std::vector<std::string> wordsToPlayWith;
    std::string aWord;
    std::string theLine;
    /* Assumes the length of each line is the same. This isn't likely going to be the case.
    theFile.seekg(std::ios::beg);
    for (int step = 0; step < theNUmber - 2; ++step) {
        theFile.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
     */

    for (int lineNumber = 0; std::getline(theFile, theLine) && lineNumber < 5; ++lineNumber) {
        if (lineNumber == theNumber) {
            std::cout << theLine << std::endl;
        }
    }

    // put theLine into substrings then put them into a vector below
    //while (theLine >> aWord) {
    //    wordsToPlayWith.push_back(aWord);
    //}

    return wordsToPlayWith;
}

int main(int argc, const char * argv[]) {
    std::fstream theFile;
    theFile.open("words.txt");

    if (!theFile) {
        std::cerr << "Something is wrong with the file.\n";
        return 1;
    }

    int theNumber = randomizer();
    std::vector<std::string> randomedWords = pusher(theNumber, theFile);

    // a little test for after writing the substring code
    //for (int i = 0; i < randomedWords.size(); ++i) {
    //    std::cout << i << " - " << randomedWords[i] << std::endl;
    //}

    // spit out a randomized sequence to generate password

    theFile.close();
    return 0;
}
