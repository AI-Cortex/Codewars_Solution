// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Sums of Parts
// link : https://www.codewars.com/kata/5ce399e0047a45001c853c2b

#include <vector>
std::vector<unsigned long long> partsSum(const std::vector<unsigned long long> &ls)
{
    unsigned long long sum = 0;
    std::vector<unsigned long long> res(ls.size() + 1);

    for (int i = ls.size() - 1; i >= 0; i--)
    {
        sum += ls[i];
        res[i] = sum;
    }

    return res;
}