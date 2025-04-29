// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Abbreviate a Two Word Name
// link : https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3

#include <string>

std::string abbrevName(std::string name)
{
    char a, b;

    a = name[0];
    for (size_t i = 1; i < name.size(); i++)
        if (name[i] == ' ')
        {
            b = name[i + 1];
            break;
        }
    name = "";
    name += std::toupper(a);
    name += '.';
    name += std::toupper(b);
    return name;
}