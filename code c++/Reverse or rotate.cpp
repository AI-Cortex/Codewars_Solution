// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Reverse or rotate?
// link : https://www.codewars.com/kata/56b5afb4ed1f6d5fb0000991

#include <string>
#include <algorithm>

class RevRot
{
public:
    static std::string revRot(const std::string &strng, unsigned int sz)
    {
        if (sz <= 0 || strng == "" || sz > strng.size())
            return "";
        std::string s, temp;
        int start = 0;
        while (start + sz <= strng.size())
        {
            temp = strng.substr(start, sz);
            start += sz;
            if (div_2(temp))
                reverse(temp.begin(), temp.end());

            else
                rotate(temp.begin(), temp.begin() + 1, temp.end());

            s += temp;
        }
        return s;
    }
    static bool div_2(const std::string &s)
    {
        int sum = 0;
        for (auto ch : s)
            sum += ch - '0';
        return sum % 2 == 0;
    }
};
