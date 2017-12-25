/*
 Sifer Aseph
 TopCoder: LongLiveZhangzj
 https://community.topcoder.com/stat?c=problem_statement&pm=14675
 */

#include <iostream>
#include <vector>
#include <string>

class LongLiveZhangzj {
public:
    int donate (std::vector<std::string> speech, std::vector<std::string> words) {
        int second = 0;

        for (int i = 0; i < speech.size(); ++i) {
            if (std::find(words.begin(), words.end(), speech[i]) != words.end()) {
                second++;
            }
        }

        return second;
    }

private:

};

int main() {
    LongLiveZhangzj example;
    std::vector<std::string> first = {"make", "topcoder", "great", "again"};
    std::vector<std::string> second = {"make", "america", "great", "again"};
    std::cout << example.donate(first, second) << std::endl;

    std::vector<std::string> one = {"a", "a"};
    std::vector<std::string> two = {"a"};
    std::cout << example.donate(one, two) << std::endl;

    return 0;
}

/*
 Zhangzj is the emperor of Yali empire and is esteemed by his people.

 "Long live Zhangzj" is heard across the country. Needless to say, people in the empire hope their leader will live forever. However, everybody will die, unless others donate their lives to the person.

 In the empire, there's a special way to donate life. There are some fixed words that are called exciting. Whenever someone speaks an exciting word, he automatically donates one second of his life to Zhangzj. For example, "toad" and "river" are exciting. Then, if somebody says the sequence of words "a", "toad", "jumps", "into", "the", "toad", "river", they donate three seconds to Zhangzj.

 Given a String[] speech containing all the words someone says, and a String[] words containing all exciting words, return the number of seconds the speaker will donate to Zhangzj.

 A word may appear multiple times in speech, but not in words.
 */
