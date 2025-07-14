// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Maximum Product
// link : https://www.codewars.com/kata/5a4138acf28b82aa43000117

#include <vector>
using namespace std;

int adjacentElementsProduct(vector<int> inputArray)
{
    int m = inputArray[0] * inputArray[1];
    for (size_t i = 1; i < inputArray.size() - 1; i++)
        m = max(m, inputArray[i] * inputArray[i + 1]);

    return m;
}