// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Even numbers in an array
// link : https://www.codewars.com/kata/5a431c0de1ce0ec33a00000c

#include <vector>

std::vector<int> evenNumbers(std::vector<int> arr, int n)
{
    if (n == 0)
        return {};
    std::vector<int> v(n--);
    for (auto it = arr.rbegin(); it != arr.rend(); it++)
        if ((*it & 1) == 0)
        {
            v[n--] = *it;

            if (n < 0)
                return v;
        }

    return v;
}