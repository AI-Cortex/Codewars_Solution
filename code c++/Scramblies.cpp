// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Scramblies
// link : https://www.codewars.com/kata/55c04b4cc56a697bb0000048

#include <string>
#include <map>

bool scramble(const std::string &s1, const std::string &s2)
{
    std::map<char, int> m;
    for (char c : s1)
        m[c]++;
    for (char c : s2)
    {
        if (m[c] == 0)
            return false;
        m[c]--;
    }

    return true;
}