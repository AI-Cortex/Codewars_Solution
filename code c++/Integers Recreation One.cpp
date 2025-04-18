// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Integers: Recreation One
// link : https://www.codewars.com/kata/55aa075506463dac6600010d

#include <utility>
#include <vector>
#include <cmath>

class SumSquaredDivisors
{
public:
    static std::vector<std::pair<long long, long long>> listSquared(long long m, long long n)
    {
        std::vector<std::pair<long long, long long>> v;
        for (long long i = m; i <= n; i++)
        {
            long long sum = 0;
            for (long long j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    sum += j * j;
                    if (j != i / j)
                        sum += (i / j) * (i / j);
                }
            }
            long long int k = sqrt(sum);
            if (k * k == sum)
                v.push_back(std::make_pair(i, sum));
        }
        return v;
    }
};
