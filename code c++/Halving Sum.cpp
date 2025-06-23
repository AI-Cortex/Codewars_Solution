// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Halving Sum
// link : https://www.codewars.com/kata/5a58d46cfd56cb4e8600009d

unsigned halving_sum(unsigned n)
{
    unsigned sum = 0;
    int d = 1;
    while (n / d)
    {
        sum += n / d;
        d *= 2;
    }
    return sum;
}