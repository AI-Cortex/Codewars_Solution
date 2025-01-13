// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sum of two lowest positive integers
// Link: https://www.codewars.com/kata/558fc85d8fd1938afb000014

#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{

    long min_1, min_2;
    min_1 = std::min(numbers[0], numbers[1]);
    min_2 = std::max(numbers[0], numbers[1]);

    for (int i = 2; i < (int)(numbers.size()); i++)
    {
        if (numbers[i] < min_1)
        {
            min_2 = min_1;
            min_1 = numbers[i];
        }
        else if (numbers[i] < min_2)
        {

            min_2 = numbers[i];
        }
    }

    return min_1 + min_2;
}