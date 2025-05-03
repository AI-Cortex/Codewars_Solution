// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Calculate average
// link : https://www.codewars.com/kata/57a2013acf1fa5bfc4000921

#include <vector>

double calcAverage(const std::vector<int> &values)
{
    if (values.size() == 0)
        return 0;
    double sum = 0;
    for (auto n : values)
        sum += n;
    return sum / values.size();
}