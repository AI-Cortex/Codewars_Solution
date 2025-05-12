// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Simple beads count
// link : https://www.codewars.com/kata/58712dfa5c538b6fc7000569

unsigned int countRedBeads(unsigned int n)
{
    if (n < 2)
        return 0;
    return (n - 1) * 2;
}