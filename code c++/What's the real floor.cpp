// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: What's the real floor?
// Link: https://www.codewars.com/kata/574b3b1599d8f897470018f6

int getRealFloor(int f)
{
    if (f < 1)
        return f;
    if (f < 13)
        return f - 1;
    else
        return f - 2;
}