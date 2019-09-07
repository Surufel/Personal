/*
 Sifer Aseph
 TopCoder: NamingConvention
 http://community.topcoder.com/stat?c=problem_statement&pm=13521
 */

#include <iostream>
#include <string>

class NamingConvention {
public:
    std::string toCamelCase (std::string variableName) {
        int count = variableName.length();
        if (count < 1 && count > 50) {
            exit(EXIT_FAILURE);
        }
        
        for (std::string::iterator itr = variableName.begin(); itr != variableName.end(); ++itr) {
            if (*itr == '_') {
                *itr = '\0';
                ++itr;
                *itr = toupper(*itr);
            }
        }
        
        return variableName;
    }
};

int main() {
    NamingConvention test;
    std::cout << test.toCamelCase("variable") << std::endl;
    std::cout << test.toCamelCase("simple_test") << std::endl;
    std::cout << test.toCamelCase("t_o_p_c_o_d_e_r") << std::endl;
    std::cout << test.toCamelCase("the_variable_name_can_be_very_long_like_this") << std::endl;
    
    return 0;
}

/*
 In most programming languages variable names cannot contain spaces. If we want a variable name that consists of two or more words, we have to encode the spaces somehow. In this problem, we will look at two ways of doing so: Snake Case and Camel Case. When using Snake Case, we just replace each space by an underscore ('_'). When using Camel Case, we capitalize the first letter of each word except for the first one, and then we remove all spaces.

 For example, suppose that we want to declare a variable called "good morning world" (quotes for clarity). In Snake Case, we would write this variable as "good_morning_world", while in Camel Case it would be "goodMorningWorld".
 
 You are given a String variableName. This String contains a valid variable name written in Snake Case. Return the same variable name in Camel Case.
 */
