// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sum of the first nth term of Series
// Link: https://www.codewars.com/kata/555eded1ad94b00403000071

#include <cmath>

std::string seriesSum(int n)
{
    int d = 1;
    double sum = 0;
    for (int i = 1; i <= n; i++, d += 3)
        sum += 1.0 / d;
    sum = std::round(sum * 100) / 100.0;
    std::string s = std::to_string(sum);
    int indx = s.find('.');
    return s.substr(0, indx + 3);
}