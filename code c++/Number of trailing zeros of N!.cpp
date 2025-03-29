// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Number of trailing zeros of N!
// link : https://www.codewars.com/kata/52f787eb172a8b4ae1000a34

long zeros(long n)
{
    long five = 1;
    long zero = 0;
    while (five <= n)
    {
        five *= 5;
        zero += n / five;
        
    }
    return zero;
}