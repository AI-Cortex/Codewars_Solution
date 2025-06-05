// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Bumps in the Road
// link : https://www.codewars.com/kata/57ed30dde7728215300005fa

#include <string>

std::string bumps(std::string road)
{
    int n = count(road.begin(), road.end(), 'n');
    return ((n <= 15) ? "Woohoo!" : "Car Dead");
}