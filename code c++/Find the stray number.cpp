// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Find the stray number
// Link: https://www.codewars.com/kata/57f609022f4d534f05000024

int stray(std::vector<int> numbers)
{
    int n = 0;
    for (const auto &num : numbers)
        n ^= num;
    return n;
};