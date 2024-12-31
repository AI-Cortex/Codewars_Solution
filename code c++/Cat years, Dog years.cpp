// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Cat years, Dog years
// Link: https://www.codewars.com/kata/5a6663e9fd56cb5ab800008b

#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears)
{
    int y;
    if (humanYears == 1)
        y = 15;
    else
        y = 24;

    int dog = y, cat = y;
    if (humanYears > 2)
    {
        dog = y + (humanYears - 2) * 5;
        cat = y + (humanYears - 2) * 4;
    }

    return {humanYears, cat, dog};
}