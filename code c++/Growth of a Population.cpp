// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Growth of a Population
// Link: https://www.codewars.com/kata/563b662a59afc2b5120000c6

class Arge
{
public:
    static int nbYear(int p0, double percent, int aug, int p)
    {
        int t = 0;
        while (p0 < p)
        {
            t++;
            p0 += p0 * (percent / 100) + aug;
        }
        return t;
    }
};