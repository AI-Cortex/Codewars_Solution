// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Two Oldest Ages
// Link: https://www.codewars.com/kata/511f11d355fe575d2c000001

#include <vector>
#include <array>

std::array<int, 2> two_oldest_ages(std::vector<int> ages)
{
    int first = std::max(ages[0], ages[1]);
    int second = std::min(ages[0], ages[1]);
    for (size_t i = 2; i < ages.size(); i++)
    {
        if (ages[i] > first)
        {
            second = first;
            first = ages[i];
        }
        else if (ages[i] > second)
            second = ages[i];
    }
    return {second, first};
}
