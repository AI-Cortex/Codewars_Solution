// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Sum of a sequence
// link : https://www.codewars.com/kata/586f6741c66d18c22800010a

int sequenceSum(int start, int end, int step)
{
    int sum = 0;
    for (int i = start; i <= end; i += step)
        sum += i;
    return sum;
}