// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Pole Vault Starting Marks
// link : https://www.codewars.com/kata/5786f8404c4709148f0006bf


#include <cmath>

double startingMark(double bodyHeight)
{
    double m = 3.93548;
    double c = 3.46806;

    double start = m * bodyHeight + c;
    return round(start * 100) / 100;
}