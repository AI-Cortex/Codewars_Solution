// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : V     A     P     O     R     C     O     D     E
// link : https://www.codewars.com/kata/5966eeb31b229e44eb00007a

#include <string>

std::string vaporcode(const std::string &str)
{
    std::string s(str.size() * 3, ' ');
    int i = 0;
    for (auto ch : str)
        if (ch != ' ')
        {
            s[i] = std::toupper(ch);
            i += 3;
        }
    return s.substr(0, i - 2);
}