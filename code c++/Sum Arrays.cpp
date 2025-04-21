// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Sum Arrays
// link : https://www.codewars.com/kata/53dc54212259ed3d4f00071c

#include <vector>
#include <numeric>

int sum(std::vector<int> nums)
{
    return std::accumulate(nums.begin(), nums.end(), 0);
}