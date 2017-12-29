/*
 Sifer Aseph
 TopCoder: AccountBalance
 https://community.topcoder.com/stat?c=problem_statement&pm=6036
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

class AccountBalance {
public:
    int processTransactions(int startingBalance, std::vector<std::string> transactions) {
        if (transactions.size() == 0) {
            return startingBalance;
        }
        
        for (int i = 0; i < transactions.size(); ++i) {
            if (transactions[i].substr(0,1) == "C") { // add
                startingBalance += stoi(transactions[i].substr(2, 6));
            }
            
            if (transactions[i].substr(0,1) == "D") { // subtract
                startingBalance -= stoi(transactions[i].substr(2, 6));
            }
        }
        
        return startingBalance;
    }
    
private:

};

int main() {
    AccountBalance test;

    std::cout << test.processTransactions(100, {"C 1000", "D 500", "D 350"}) << std::endl; // should return 250
    std::cout << test.processTransactions(100, {}) << std::endl; // 100
    
    return 0;
}

/*
 You are working for the financial institution TopBank, and you have been tasked with writing a module that will take an initial account balance, along with a list of that day's transactions, and return the ending balance for the day.
 
 Each transaction will be either a credit, which adds funds to the account, or a debit, which removes funds from the account. If a debit exceeds the available funds at the time, then the account balance will go negative. You will be given an int startingBalance, the initial account balance. You will also be given a String[] transactions, the list of transactions for the day. Each element of transactions will be in the form "type amount" (quotes added for clarity). Each type will be 'C' or 'D', for credit or debit, respectively. Each amount will be an integer between 1 and 1000000, inclusive, with no leading zeros. You are to return an int representing the ending balance after processing all of the transactions.
 */
