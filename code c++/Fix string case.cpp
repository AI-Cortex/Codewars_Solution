// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Fix string case
// Link: https://www.codewars.com/kata/5b180e9fedaa564a7000009a

#include <string>

std::string solve(const std::string &str)
{
    int up = 0, low = 0;
    for (auto ch : str)
        (std::isupper(ch)) ? up++ : low++;

    std::string s = str;
    if (up > low)
    {
        for (auto &ch : s)
            ch = std::toupper(ch);
        return s;
    }
    for (auto &ch : s)
        ch = std::tolower(ch);
    return s;
}
