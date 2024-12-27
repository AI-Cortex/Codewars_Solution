// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Drink about
// Link: https://www.codewars.com/kata/56170e844da7c6f647000063

#include <string>

std::string people_with_age_drink(int age)
{
    if (age < 14)
        return "drink toddy";
    if (age < 18)
        return "drink coke";
    if (age < 21)
        return "drink beer";

    return "drink whisky";
}