// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Count the Digit
// Link: https://www.codewars.com/kata/566fc12495810954b1000030

#include <string>

class CountDig
{
public:
    static int nbDig(int n, int d)
    {
        char c = std::to_string(d)[0];
        int t = 0;
        for (int i = 0; i <= n; i++)
        {
            t += count(std::to_string(i * i), c);
        }
        return t;
    }
    static int count(std::string s, char c)
    {
        int t = 0;
        for (auto ch : s)
            if (ch == c)
                t++;

        return t;
    }
};
