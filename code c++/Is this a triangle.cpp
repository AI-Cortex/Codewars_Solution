// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Is this a triangle
// Link: https://www.codewars.com/kata/56606694ec01347ce800001b

namespace Triangle
{
    bool isTriangle(int a, int b, int c)
    {
        return (a + b > c) && (a + c > b) && (b + c > a);
    }
};