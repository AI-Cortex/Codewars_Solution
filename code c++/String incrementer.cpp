// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : String incrementer
// link : https://www.codewars.com/kata/54a91a4883a7de5d7800009c

#include <string>

std::string incrementString(const std::string &str)
{

    std::size_t len = str.size();
    if (!isdigit(str[len - 1]))
        return str + "1";

    size_t last_index = str.find_last_not_of("0123456789");
    std::string number = str.substr(last_index + 1);
    len = number.size();
    number = std::to_string(stoi(number) + 1);
    if (len > number.size())
        number = std::string(len - number.size(), '0') + number;

    return str.substr(0, last_index) + number;
}
