// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Incrementer
// link : https://www.codewars.com/kata/590e03aef55cab099a0002e8

#include <vector>
std::vector<int> incrementer(std::vector<int> nums)
{
    for (size_t i = 1; i <= nums.size(); i++)
        nums[i - 1] = (nums[i - 1] + i) % 10;
    return nums;
}