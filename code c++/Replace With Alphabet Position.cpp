// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Replace With Alphabet Position
// Link: https://www.codewars.com/kata/546f922b54af40e1e90001da

#include <string>

std::string alphabet_position(const std::string &text)
{
    std::string s;
    for (auto ch : text)
        s += isalpha(ch) ? std::to_string(std::tolower(ch) - 'a') + " " : "";
    return s;
}