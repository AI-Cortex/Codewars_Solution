// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Count characters in your string
// Link: https://www.codewars.com/kata/52efefcbcdf57161d4000091

#include <map>
#include <string>

std::map<char, unsigned> count(const std::string &string)
{
    std::map<char, unsigned> m;
    for (auto ch : string)
        m[ch]++;
    return m;
}