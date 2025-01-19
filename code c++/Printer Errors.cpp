// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Printer Errors
// Link: https://www.codewars.com/kata/56541980fa08ab47a0000040

class Printer
{
public:
    static std::string printerError(const std::string &s)
    {
        int len = s.size();
        int n = 0;
        for (auto c : s)
        {
            if (c > 'm')
                n++;
        }
        return std::to_string(n) + "/" + std::to_string(len);
    }
};
