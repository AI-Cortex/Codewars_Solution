// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Maximum Multiple
// link : https://www.codewars.com/kata/5aba780a6a176b029800041c

int maxMultiple(int divisor, int bound)
{
    while (bound)
    {
        if (bound % divisor == 0)
            return bound;
        bound--;
    }
    return bound;
}