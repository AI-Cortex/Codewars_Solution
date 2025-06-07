// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Switcheroo
// link : https://www.codewars.com/kata/57f759bb664021a30300007d

#include <string>

std::string switcheroo(const std::string &s)
{
    std::string out = s;
    for (auto &ch : out)
    {
        if (ch == 'a')
            ch = 'b';
        else if (ch == 'b')
            ch = 'a';
    }
    return out;
}