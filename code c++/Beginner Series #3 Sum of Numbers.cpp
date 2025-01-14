// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Beginner Series #3 Sum of Numbers
// Link: https://www.codewars.com/kata/55f2b110f61eb01779000053

int get_sum(int a, int b)
{
    if (a == b)
        return a;

    int sum = 0;
    if (a > b)
        std::swap(a, b);

    for (int i = a; i <= b; i++)
        sum += i;
    return sum;
}