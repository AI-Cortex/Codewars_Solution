// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Number of Decimal Digits
// Link: https://www.codewars.com/kata/58fa273ca6d84c158e000052

#include <stdint.h>

int digits(uint64_t n)
{
    std::string s = std::to_string(n);
    int t = 0;
    for (auto ch : s)
        if (isdigit(ch))
            t++;
    return t;
}