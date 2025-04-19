// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Square(n) Sum
// link : https://www.codewars.com/kata/515e271a311df0350d00000f

#include <vector>

int square_sum(const std::vector<int> &numbers)
{
    int sum = 0;
    for (auto n : numbers)
        sum += n * n;
    return sum;
}