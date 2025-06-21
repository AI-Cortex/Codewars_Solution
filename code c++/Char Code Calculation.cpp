// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Char Code Calculation
// link : https://www.codewars.com/kata/57f75cc397d62fc93d000059

#include <string>
#include <algorithm>

int calc(const std::string &x)
{
    std::string total1;
    for (auto ch : x)
        total1 += std::to_string(ch);
    std::string total2 = total1;
    replace(total2.begin(), total2.end(), '7', '1');

    int sum1 = 0, sum2 = 0;
    for (char ch : total1)
        sum1 += ch - '0';
    for (char ch : total2)
        sum2 += ch - '0';
    return sum1 - sum2;
}