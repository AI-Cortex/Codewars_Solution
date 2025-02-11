// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Count the number of Duplicates
// Link: https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1

#include <string>
#include <map>

std::size_t duplicateCount(const std::string &in)
{
    std::map<char, int> d;
    std::size_t t = 0;

    for (auto ch : in)
    {
        d[tolower(ch)]++;
        if (d[tolower(ch)] == 2)
            t++;
    }

    return t;
}