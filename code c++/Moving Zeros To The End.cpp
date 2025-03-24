// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Moving Zeros To The End
// Link: https://www.codewars.com/kata/52597aa56021e91c93000cb0

#include <vector>

std::vector<int> move_zeroes(const std::vector<int> &input)
{
    std::size_t t = input.size();
    std::vector<int> v;
    v.reserve(t);

    for (auto n : input)
        if (n)
            v.push_back(n);
    t -= v.size();
    for (std::size_t i = 0; i < t; ++i)
        v.push_back(0);
    return v;
}
