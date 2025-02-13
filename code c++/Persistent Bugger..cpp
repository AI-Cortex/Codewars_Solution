// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Persistent Bugger.
// Link: https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec

int persistence(long long n)
{

    int t = 0;
    long long ans = 1;
    while (n > 9)
    {
        while (n)
        {
            ans *= n % 10;
            n /= 10;
        }
        n = ans;
        ans = 1;
        t++;
    }
    return t;
}
