// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Alternate capitalization
// link : https://www.codewars.com/kata/59cfc000aeb2844d16000075

#include <string>
#include <utility>

std::pair<std::string, std::string> capitalize(const std::string &s)
{
    std::string s1 = s, s2 = s;
    for (size_t i = 0; i < s.size(); i += 2)
        s1[i] &= ~32;
    for (size_t i = 1; i < s.size(); i += 2)
        s2[i] &= ~32;
    return {s1, s2};
}