/*
 Sifer Aseph
 TopCoder: WhichDay
 https://community.topcoder.com/stat?c=problem_statement&pm=11553
 */

#include <iostream>
#include <vector>
#include <string>

class WhichDay {
public:
    int dayWeight(std::string day) {
        if (day == "Sunday") {
            return 1;
        }
        if (day == "Monday") {
            return 2;
        }
        if (day == "Tuesday") {
            return 3;
        }
        if (day == "Wednesday") {
            return 4;
        }
        if (day == "Thursday") {
            return 5;
        }
        if (day == "Friday") {
            return 6;
        }
        if (day == "Saturday") {
            return 7;
        }
        return 0;
    }

    std::string getDay(std::vector<std::string> notOnThisDay) {
        int total = 28;
        int count = 0;
        std::vector<std::string> week = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

        for (int i = 0; i < 6; ++i) {
            count += dayWeight(notOnThisDay[i]);
        }
        int indexOfDay = total - count;
        return week[indexOfDay - 1];
    }

private:

};

int main() {
    WhichDay example;
    std::vector<std::string> first = {"Sunday", "Monday", "Tuesday", "Thursday", "Friday", "Saturday"};
    std::cout << example.getDay(first) << std::endl;

    return 0;
}

/*
 This week there will be an important meeting of your entire department. You clearly remember your boss telling you about it. The only thing you forgot is the day of the week when the meeting will take place.

 You asked six of your colleagues about the meeting. None of them knew the day when it will take place, but each of them remembered one day when it will not take place. The days they remembered were distinct. For a clever programmer like you, this was enough to determine the day of the meeting.

 You are given a String[] notOnThisDay containing six weekdays when the meeting will not take place. Return the weekday of the meeting.
 */
