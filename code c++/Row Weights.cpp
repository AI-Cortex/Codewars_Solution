// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Row Weights
// link : https://www.codewars.com/kata/5abd66a5ccfd1130b30000a9

#include <vector>
#include <utility>

using namespace std;

pair<int, int> rowWeights(const vector<int> &weights)
{
    int sum1 = 0, sum2 = 0;
    for (size_t i = 0; i < weights.size(); i += 2)
        sum1 += weights[i];

    for (size_t i = 1; i < weights.size(); i += 2)
        sum2 += weights[i];
    return {sum1, sum2};
}