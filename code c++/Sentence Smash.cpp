// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Sentence Smash
// link : https://www.codewars.com/kata/53dc23c68a0c93699800041d

#include <vector>
#include <string>

std::string smash(const std::vector<std::string> &words)
{
    std::string s;
    for (auto i : words)
        s += i + " ";

    return s.substr(0, s.size() - 1);
}