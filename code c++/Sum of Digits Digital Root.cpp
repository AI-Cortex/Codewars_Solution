// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sum of Digits / Digital Root
// Link: https://www.codewars.com/kata/541c8630095125aba6000c00

int digital_root(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum > 9 ? digital_root(sum) : sum;
}