// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Two to One
// Link: https://www.codewars.com/kata/5656b6906de340bd1b0000ac

#include <set>
#include <algorithm>

class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2)
    {
        std::string s = s1 + s2;
        std::set<char> st(s.begin(), s.end());
        return std::string(st.begin(), st.end());
    }
};