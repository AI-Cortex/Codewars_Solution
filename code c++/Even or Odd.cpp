// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Even or Odd
// link : https://www.codewars.com/kata/53da3dbb4a5168369a0000fe

#include <string>

std::string even_or_odd(int number) 
{
    return number&1 ? "Odd" : "Even";
}