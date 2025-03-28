// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Maximum subarray sum
// Link: https://www.codewars.com/kata/54521e9ec8e60bc4de000d6c

#include <vector>

int maxSequence(const std::vector<int> &arr)
{
    int m = 0;
    int s = 0;
    for (auto n : arr)
    {
        s = std::max(n, s + n);
        m = std::max(m, s);
    }
    return m;
}