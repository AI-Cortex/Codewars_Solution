// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: You're a square!
// Link: https://www.codewars.com/kata/54c27a33fb7da0db0100040e

#include <cmath>

bool is_square(int n)
{
    int t = sqrt(n);
    return t * t == n;
}