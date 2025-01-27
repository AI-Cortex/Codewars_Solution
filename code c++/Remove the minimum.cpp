// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Remove the minimum
// Link: https://www.codewars.com/kata/563cf89eb4747c5fb100001b

#include <vector>

std::vector<unsigned int> removeSmallest(const std::vector<unsigned int> &numbers)
{
    if (numbers.empty())
    {
        return {};
    }
    int len = numbers.size();
    std::vector<unsigned int> v = numbers;
    unsigned int n = numbers[0];
    int index = 0;

    for (int i = 1; i < len; i++)
    {
        if (numbers[i] < n)
        {
            n = numbers[i];
            index = i;
        }
    }
    v.erase(v.begin() + index);

    return v;
}
