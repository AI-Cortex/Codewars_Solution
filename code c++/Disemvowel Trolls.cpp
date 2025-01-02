// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Disemvowel Trolls
// Link: https://www.codewars.com/kata/52fba66badcd10859f00097e

#include <string>

std::string disemvowel(std::string str)
{
    std::string vowels = "aeiouAEIOU";
    std::string result;

    for (char c : str)
        if (vowels.find(c) == -1)
            result += c;

    return result;
}