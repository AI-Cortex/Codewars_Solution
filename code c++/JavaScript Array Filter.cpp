// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: JavaScript Array Filter
// Link: https://www.codewars.com/kata/514a6336889283a3d2000001

#include <vector>

std::vector<int> get_even_numbers(const std::vector<int> &arr)
{
    std::vector<int> v;
    for (int i : arr)
    {
        if (i % 2 == 0)
            v.push_back(i);
    }
    return v;
}