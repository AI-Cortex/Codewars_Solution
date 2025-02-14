// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Does my number look big in this?
// Link: https://www.codewars.com/kata/5287e858c6b5a9678200083c

#include <math.h>

bool narcissistic(int value)
{
    int p = log10(value) + 1;
    int sum = 0, n = value;

    while (value)
    {
        sum += pow(value % 10, p);
        value /= 10;
    }
    return sum == n;
}
