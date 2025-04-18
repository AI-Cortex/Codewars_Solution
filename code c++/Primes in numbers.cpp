// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Primes in numbers
// link : https://www.codewars.com/kata/54d512e62a5e54c96200019e

#include <iostream>
#include <cmath>

void output(std::string &s, int a, int b)
{
    if (b == 1)
        s += "(" + std::to_string(a) + ")";
    else
        s += "(" + std::to_string(a) + "**" + std::to_string(b) + ")";
}

class PrimeDecomp
{
public:
    static std::string factors(int n)
    {
        std::string s;
        int k = 0;
        while (n % 2 == 0)
        {
            k++;
            n /= 2;
        }
        if (k)
            output(s, 2, k);
        k = 0;

        for (int i = 3; i <= sqrt(n); i += 2)
        {
            while (n % i == 0)
            {
                k++;
                n /= i;
            }
            if (k)
            {
                output(s, i, k);
                k = 0;
            }
        }

        if (n > 1)
        {
            output(s, n, 1);
        }
        return s;
    }
};