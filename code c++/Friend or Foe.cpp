// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Friend or Foe?Friend or Foe?
// Link: https://www.codewars.com/kata/55b42574ff091733d900002f

#include <string>
#include <vector>

std::vector<std::string> friendOrFoe(const std::vector<std::string> &input)
{
    std::vector<std::string> v;
    for (auto &s : input)
    {
        if (s.size() == 4)
            v.push_back(s);
    }
    return v;
}
