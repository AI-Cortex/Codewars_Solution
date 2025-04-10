// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Sum of positive
// link : https://www.codewars.com/kata/5715eaedb436cf5606000381

#include <vector>

int positive_sum(const std::vector<int> arr)
{
    int sum = 0;
    for (auto n : arr)
        sum += (n > 0) ? n : 0;
    return sum;
}