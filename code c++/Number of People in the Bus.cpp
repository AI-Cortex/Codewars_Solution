// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Number of People in the Bus
// Link: https://www.codewars.com/kata/5648b12ce68d9daa6b000099

#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>> &busStops)
{
    int sum = 0;
    for (auto b : busStops)
    {
        sum += b.first;
        sum -= b.second;
    }
    return sum;
}
