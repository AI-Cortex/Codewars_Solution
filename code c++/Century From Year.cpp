// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Century From Year
// link : https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097

int centuryFromYear(int year)
{
    return year / 100 + (year % 100 > 0);
}