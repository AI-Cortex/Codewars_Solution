// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : String repeat
// link : https://www.codewars.com/kata/57a0e5c372292dd76d000d7e

#include <string>

std::string repeat_str(size_t repeat, const std::string &str)
{
    std::string s;
    for (size_t i = 0; i < repeat; i++)
    {
        s += str;
    }

    return s;
}