// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Evens times last
// Link: https://www.codewars.com/kata/5a1a9e5032b8b98477000004

#include <vector>

int even_last(std::vector<int> nums)
{
    if (nums.size() == 0)
        return 0;
    int sum = 0;
    for (std::size_t i = 0; i < nums.size(); i += 2)
    {
        sum += nums[i];
    }
    return sum * (*nums.rbegin());
}