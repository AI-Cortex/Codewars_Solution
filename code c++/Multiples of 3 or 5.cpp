// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Multiples of 3 or 5
// Link: https://www.codewars.com/kata/514b92a657cdc65150000006

int solution(int number)
{
    int sum = 0;
    for (int i = 3; i < number; i++)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    return sum;
}
