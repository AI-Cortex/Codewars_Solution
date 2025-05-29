// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : N-th Fibonacci
// link : https://www.codewars.com/kata/522551eee9abb932420004a0

int nthFibo(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 1; i < n; i++)
    {
        b += a;
        a = b - a;
    }
    return a;
}