// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Are they the "same"?
// Link: https://www.codewars.com/kata/550498447451fbbd7600041c

#include <vector>
#include <algorithm>

class Same
{
public:
    static bool comp(std::vector<int> &a, std::vector<int> &b)
    {
        if (a.size() != b.size())
            return false;

        for (auto &n : a)
            n *= n;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        return a == b;
    }
};