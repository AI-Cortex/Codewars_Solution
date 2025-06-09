// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Filter the number
// link : https://www.codewars.com/kata/55b051fac50a3292a9000025

#include <string>

long long filter_string(const std::string &value)
{
    long long n = 0;
    for (auto ch : value)
        if (isdigit(ch))
            n = n * 10 + ch - '0';
    return n;
}