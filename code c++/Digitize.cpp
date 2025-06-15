// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Digitize
// link : https://www.codewars.com/kata/5417423f9e2e6c2f040002ae

#include <vector>
#include <cmath>

std::vector<int> digitize(int n)
{
    if (n == 0)
        return {0};
    int i = log10(n) + 1;
    std::vector<int> v(i);
    while (n)
    {
        v[--i] = n % 10;
        n /= 10;
    }
    return v;
}