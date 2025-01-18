// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Find the next perfect square!
// link : https://www.codewars.com/kata/56269eb78ad2e4ced1000013

#include <cmath>

long int findNextSquare(long int sq)
{
    long int n = sqrt(sq);
    if (n * n == sq)
        return (n + 1) * (n + 1);
    return -1;
}