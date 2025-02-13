// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Convert string to camel case
// Link: https://www.codewars.com/kata/517abf86da9663f1d2000003

#include <string>

std::string to_camel_case(std::string text)
{
    std::string s, word;

    for (auto ch : text)
    {
        if (ch == '_' || ch == '-')
        {
            word[0] = std::toupper(word[0]);
            s += word;
            word = "";
        }
        else
        {
            word += ch;
        }
    }
    word[0] = std::toupper(word[0]);
    s += word;

    s[0] = text[0];

    return s;
}