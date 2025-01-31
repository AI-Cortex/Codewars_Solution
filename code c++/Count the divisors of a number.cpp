// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Count the divisors of a number
// Link: https://www.codewars.com/kata/542c0f198e077084c0000c2e

int divisors(long long n)
{
    int count = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (i != n / i)
                count++;
        }
    }
    return count;
}
