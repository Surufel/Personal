/*
 Sifer Aseph
 TopCoder: Initials
 https://community.topcoder.com/stat?c=problem_statement&pm=14389
 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class Initials {
public:
    std::string getInitials(std::string name) {
        std::istringstream streamOfName(name);
        std::string substring;
        std::string theInitial = "";

        while(streamOfName >> substring) {
            theInitial += substring[0];
        }

        return theInitial;
    }

};

int main() {
    Initials example;
    std::cout << example.getInitials("john fitzgerald kennedy") << std::endl;
}

/*
 When dealing with long names and phrases, we sometimes use the initial letters of words to form its acronym. For example, we use "JFK" instead of "John Fitzgerald Kennedy", "lgtm" instead of "looks good to me", and so on.

 You are given a String name. This String contains a phrase: one or more words separated by single spaces. Please compute and return the acronym of this phrase. (As above, the acronym should consist of the first letter of each word, in order.)
 */
