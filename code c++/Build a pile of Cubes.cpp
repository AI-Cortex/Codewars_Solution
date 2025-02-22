// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Build a pile of Cubes
// Link: https://www.codewars.com/kata/5592e3bd57b64d00f3000047

class ASum
{
public:
    static long long findNb(long long m)
    {
        long long sum = 0;
        long long i = 1;
        while (sum < m)
        {
            sum += (i * i * i);
            i++;
        }
        if (sum == m)
            return i - 1;
        return -1;
    }
};
