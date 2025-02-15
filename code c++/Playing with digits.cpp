// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Playing with digits
// link : https://www.codewars.com/kata/5552101f47fc5178b1000050

#include <math.h>

class DigPow
{
public:
    static int digPow(int n, int p)
    {
        int num = n, e = p + log10(n);
        int t = 0;
        while (num)
        {
            t += pow(num % 10, e--);
            num /= 10;
        }
        int k = t / n;
        if (k * n == t)
            return k;
        return -1;
    }
};
