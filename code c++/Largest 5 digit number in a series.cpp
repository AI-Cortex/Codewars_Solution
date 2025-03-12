// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Largest 5 digit number in a series
// Link: https://www.codewars.com/kata/51675d17e0c1bed195000001

#include <string>

int largest_five_digits(const std::string &digits)
{
    std::string s = "0";

    for (size_t i = 0; i <= digits.size() - 5; i++)
        s = std::max(s, digits.substr(i, 5));

    return std::stoi(s);
}
