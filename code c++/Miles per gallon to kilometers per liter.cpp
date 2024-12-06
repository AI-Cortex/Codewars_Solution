// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Miles per gallon to kilometers per liter
// link : https://www.codewars.com/kata/557b5e0bddf29d861400005d

double converter(int mpg)
{
    double a = (mpg*1.609344) / 4.54609188;
    a = (int)(a * 100 + .5);
    return (double)a / 100;
}