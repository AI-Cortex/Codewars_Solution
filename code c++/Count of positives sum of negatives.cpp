// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Count of positives / sum of negatives
// Link: https://www.codewars.com/kata/576bb71bbbcf0951d5000044

#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    if (input.size() == 0)
        return {};
    int neg = 0, pos = 0;
    for (auto &n : input)
    {
        if (n < 1)
            neg += n;
        else
            pos++;
    }
    return {pos, neg};
}