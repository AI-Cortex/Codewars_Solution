// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Small enough? - Beginner
// Link: https://www.codewars.com/kata/57cc981a58da9e302a000214

#include <vector>

bool small_enough(std::vector<int> arr, int limit)
{
    for (auto n : arr)
        if (n > limit)
            return false;
    return true;
}