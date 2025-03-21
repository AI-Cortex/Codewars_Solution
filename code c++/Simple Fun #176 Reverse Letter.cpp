// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Simple Fun #176: Reverse Letter
// Link: https://www.codewars.com/kata/58b8c94b7df3f116eb00005b

#include <iostream>
#include <string>
#include <algorithm>

std::string reverse_letter(const std::string &s)
{
    std::string result;
    result.reserve(s.size());
    for (char c : s)
    {
        if (std::isalpha(c))
            result.push_back(c);
    }
    std::reverse(result.begin(), result.end());
    return result;
}
