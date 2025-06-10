// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Reverse a Number
// link : https://www.codewars.com/kata/555bfd6f9f9f52680f0000c5

#include <cmath>

long long reverseNumber(long long n)
{
    long long m = 0;
    while (n)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}