// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Sum of Cubes
// link : https://www.codewars.com/kata/59a8570b570190d313000037

unsigned int sum_cubes(unsigned int n)
{
    unsigned int out = 0;
    for (unsigned int i = 1; i <= n; i++)
        out += i * i * i;
    return out;
}