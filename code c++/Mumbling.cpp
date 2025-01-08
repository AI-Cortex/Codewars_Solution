// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Mumbling
// Link: https://www.codewars.com/kata/5667e8f4e3f572a8f2000039

class Accumul
{
public:
    static std::string accum(const std::string &s)
    {
        std::string out;

        for (int i = 0; i < static_cast<int>(s.size()); i++)
        {
            if (i)
                out += "-";
            out += toupper(s[i]);
            out += std::string(i, tolower(s[i]));
        }
        return out;
    }
};