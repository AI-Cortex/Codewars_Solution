// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Consecutive strings
// link : https://www.codewars.com/kata/56a5d994ac971f1ac500003e

#include <string>
#include <vector>

class LongestConsec
{
public:
    static std::string longestConsec(const std::vector<std::string> &strarr, int k)
    {
        if (k <= 0 || strarr.size() == 0 || k > strarr.size())
            return "";
        std::string s, max_s;
        for (size_t i = 0; i < k; i++)
            s += strarr[i];
        max_s = s;
        for (size_t i = k, j = 0; i < strarr.size(); i++, j++)
        {
            s = s.substr(strarr[j].size()) + strarr[i];
            if (s.size() > max_s.size())
                max_s = s;
        }
        return max_s;
    }
};