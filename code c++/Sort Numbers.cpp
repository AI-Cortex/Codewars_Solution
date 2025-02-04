// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sort Numbers
// Link: https://www.codewars.com/kata/5174a4c0f2769dd8b1000003

#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> nums)
{
    sort(nums.begin(), nums.end());
    return nums;
}