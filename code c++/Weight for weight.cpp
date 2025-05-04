// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Weight for weight
// link : https://www.codewars.com/kata/55c6126177c9441a570000cc

#include <vector>
#include <algorithm>
#include <string>

class WeightSort
{
public:
    static std::string orderWeight(const std::string &strng)
    {
        if (strng.size() == 0)
            return "";

        std::vector<std::string> v = str_to_vec(strng);
        sort(v.begin(), v.end(), f);

        std::string s;
        for (auto n : v)
            s += n + " ";

        return s.substr(0, s.size() - 1);
    }

private:
    static int digit_sum(std::string n)
    {
        int t = 0;
        for (auto c : n)
            t += c - '0';
        return t;
    }

    static bool f(std::string a, std::string b)
    {
        int d_a = digit_sum(a);
        int d_b = digit_sum(b);
        if (d_a == d_b)
            return a < b;

        return d_a < d_b;
    }

    static std::vector<std::string> str_to_vec(std::string str)
    {
        std::vector<std::string> v;

        std::string s;
        s.reserve(100);

        for (auto ch : str)
        {
            if (ch != ' ')
                s.push_back(ch);

            else if (s.size() > 0)
            {
                v.push_back(s);
                s.clear();
            }
        }
        if (s.size() > 0)
            v.push_back(s);
        return v;
    }
};
