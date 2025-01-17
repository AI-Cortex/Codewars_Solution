// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: String ends with
// Link: https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d

#include <string>

bool solution(std::string const &str, std::string const &ending)
{
    if (ending.size() > str.size())
    {
        return false;
    }
    return str.compare(str.size() - ending.size(), ending.size(), ending) == 0;
}
