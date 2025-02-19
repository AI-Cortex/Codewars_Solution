// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Find the missing letter
// Link: https://www.codewars.com/kata/5839edaa6754d6fec10000a2

#include <vector>

char findMissingLetter(const std::vector<char> &chars)
{
    for (std::size_t i = 1; i < chars.size(); i++)
        if (chars[i] - chars[i - 1] != 1)
            return chars[i] - 1;
    return ' ';
}
