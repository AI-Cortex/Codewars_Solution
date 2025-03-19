// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Maximum Length Difference
// Link: https://www.codewars.com/kata/5663f5305102699bad000056

#include <string>
#include <vector>

class MaxDiffLength
{
public:
    static int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2)
    {
        if ((a1.size() && a2.size()) == 0)
            return -1;

        size_t maxLen1 = a1[0].size(), minLen1 = a1[0].size();
        for (auto &s : a1)
        {
            maxLen1 = std::max(maxLen1, s.length());
            minLen1 = std::min(minLen1, s.length());
        }
        size_t maxLen2 = a2[0].size(), minLen2 = a2[0].size();
        for (auto &s : a2)
        {
            maxLen2 = std::max(maxLen2, s.length());
            minLen2 = std::min(minLen2, s.length());
        }
        return std::max(maxLen2 - minLen1, maxLen1 - minLen2);
    }
};
