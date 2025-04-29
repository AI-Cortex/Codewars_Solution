// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : MakeUpperCase
// link : https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7

#include <string>

std::string makeUpperCase(const std::string &input_str)
{
    std::string s;
    for (auto ch : input_str)
        if (isalpha(ch))
            s += toupper(ch);
        else
            s += ch;
    return s;
}