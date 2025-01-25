// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Odd or Even?
// Link: https://www.codewars.com/kata/5949481f86420f59480000e7

#include <string>
#include <vector>

std::string odd_or_even(const std::vector<int> &arr)
{
    long long sum = 0;
    for (auto n : arr)
        sum += n;

    return ((sum % 2) ? "odd" : "even");
}
