// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Binary Addition
// Link: https://www.codewars.com/kata/551f37452ff852b7bd000139

#include <cstdint>
#include <string>
#include <algorithm>

std::string add_binary(uint64_t a, uint64_t b)
{
    uint64_t n = a + b;
    if (n == 0)
        return "0";
    std::string s;
    while (n)
    {
        s += std::to_string(n % 2);
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}