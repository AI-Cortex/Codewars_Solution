// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Shortest Word
// Link: https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9

#include <string>
#include <climits>

int find_short(std::string str)
{
    int len = INT_MAX, n = 0;
    int size = static_cast<int>(str.size());
    for (int i = 0; i < size + 1; i++)
        if (str[i] == ' ' || i == size)
        {
            len = std::min(len, n);
            n = 0;
        }
        else
        {
            n++;
        }

    return len;
}