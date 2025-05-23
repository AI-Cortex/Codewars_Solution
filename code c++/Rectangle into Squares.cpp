// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Rectangle into Squares
// link : https://www.codewars.com/kata/55466989aeecab5aac00003e

#include <vector>

class SqInRect
{
public:
    static std::vector<int> sqInRect(int lng, int wdth)
    {
        if (lng == wdth)
            return {};

        std::vector<int> v;
        while (lng != wdth)
        {
            v.push_back(std::min(lng, wdth));
            if (lng > wdth)
                lng -= wdth;
            else
                wdth -= lng;
        }
        v.push_back(lng);
        return v;
    }
};
