// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Roman Numerals Encoder
// link : https://www.codewars.com/kata/51b62bf6a9c58071c600001b

#include <map>
std::string solution(int number)
{
    std::string result;

    std::map<int, std::string> m{
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"},
    };
    for (auto i = m.rbegin(); i != m.rend(); i++)
        while (number >= i->first)
        {
            number -= i->first;
            result += i->second;
        }

    return result;
}