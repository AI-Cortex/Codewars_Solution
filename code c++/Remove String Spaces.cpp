// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Remove String Spaces
// link : https://www.codewars.com/kata/57eae20f5500ad98e50002c5

#include <string>

std::string no_space(const std::string &x)
{
    std::string s;
    for (auto ch : x)
        if (ch != ' ')
            s += ch;
    return s;
}