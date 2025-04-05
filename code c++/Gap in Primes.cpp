// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Gap in Primes
// link : https://www.codewars.com/kata/561e9c843a2ef5a40c0000a4

class GapInPrimes
{
public:
    static std::pair<long long, long long> gap(int g, long long m, long long n)
    {
        long long prev = -1;

        for (long long i = m; i <= n; i++)
            if (isPrime(i))
            {
                if (prev > 0 && i - prev == g)
                    return std::pair{prev, i};
                prev = i;
            }

        return std::pair{0, 0};
    }
    static bool isPrime(long long n)
    {
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;
        for (int i = 5; i * i <= n; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }
};