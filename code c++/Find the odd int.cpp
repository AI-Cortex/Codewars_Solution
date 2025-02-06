// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Find the odd int
// Link: https://www.codewars.com/kata/54da5a58ea159efa38000836

#include <vector>
#include <unordered_map>
int findOdd(const std::vector<int> &numbers)
{
    std::unordered_map<int, int> mp;

    for (auto n : numbers)
        mp[n]++;

    for (const auto &pair : mp)
    {
        if (pair.second & 1)
            return pair.first;
    }
}
