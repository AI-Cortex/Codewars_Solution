// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : WeIrD StRiNg CaSe
// link : https://www.codewars.com/kata/52b757663a95b11b3d00062d

#include <string>
#include <string_view>

std::string to_weird_case(std::string_view str)
{
    std::string s(str.size(), ' ');

    for (size_t i = 0, j = 0; i < str.size(); i++, j++)
    {
        if (str[i] == ' ')
            j = -1;

        else
            s[i] = (j & 1 ? tolower(str[i]) : toupper(str[i]));
    }

    return s;
}
