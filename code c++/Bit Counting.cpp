// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Bit Counting
// Link: https://www.codewars.com/kata/526571aae218b8ee490006f4

unsigned int countBits(unsigned long long n)
{
    unsigned int t = 0;
    while (n)
    {
        t++;
        n = n & n - 1;
    }

    return t;
}
