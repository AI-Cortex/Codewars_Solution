// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Duplicate Encoder
// Link: https://www.codewars.com/kata/54b42f9314d9229fd6000d9c

#include <string>
#include <unordered_map>

std::string duplicate_encoder(const std::string &word)
{
    std::unordered_map<char, int> d;

    for (auto ch : word)
        d[std::tolower(ch)]++;

    std::string s;
    for (auto ch : word)
    {
        s += ((d[std::tolower(ch)] > 1) ? ")" : "(");
    }

    return s;
}