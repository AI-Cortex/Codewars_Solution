// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Descending Order
// Link: https://www.codewars.com/kata/5467e4d82edf8bbf40000155

#include <cinttypes>
#include <vector>
#include <algorithm>
#include <cmath>

uint64_t descendingOrder(uint64_t a)
{
    if (a == 0)
        return 0;

    std::vector<int> digits;
    while (a > 0)
    {
        digits.push_back(a % 10);
        a /= 10;
    }

    std::sort(digits.begin(), digits.end(), std::greater<int>());

    uint64_t result = 0;
    for (int digit : digits)
    {
        result = result * 10 + digit;
    }

    return result;
}