// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Is a number prime?
// Link: https://www.codewars.com/kata/5262119038c0985a5b00029f

bool isPrime(int num)
{
    if (num <= 1)
        return false;

    else
        for (int i = 2; i * i <= num; i++)
            if (num % i == 0)
                return false;

    return true;
}
