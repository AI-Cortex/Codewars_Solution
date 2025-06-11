// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Sum of Triangular Numbers
// link : https://www.codewars.com/kata/580878d5d27b84b64c000b51

int sumTriangularNumbers(int n)
{
    int sum = 0;
    int num = 0;
    for (int i = 1; i <= n; i++)
    {
        num += i;
        sum += num;
    }

    return sum;
}