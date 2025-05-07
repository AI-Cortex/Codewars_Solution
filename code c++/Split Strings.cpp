// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Split Strings
// link : https://www.codewars.com/kata/515de9ae9dcfc28eb6000001

#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> v;

    std::string s1;
    for (auto ch : s)
    {
        s1.push_back(ch);
        if (s1.size() == 2)
        {
            v.push_back(s1);
            s1.clear();
        }
    }

    if (s1.size() == 1)
    {
        s1.push_back('_');
        v.push_back(s1);
    }

    return v;
}