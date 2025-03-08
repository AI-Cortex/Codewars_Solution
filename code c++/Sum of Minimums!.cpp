// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sum of Minimums!
// Link: https://www.codewars.com/kata/5d5ee4c35162d9001af7d699

#include <vector>

int sum_of_minimums(const std::vector<std::vector<int>> &numbers)
{
    int sum = 0;
    for (const auto &vec : numbers)
    {
        int m = vec[0];
        for (auto n : vec)
            m = std::min(m, n);
        sum += m;
    }
    return sum;
}