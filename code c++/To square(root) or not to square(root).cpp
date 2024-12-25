// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: To square(root) or not to square(root)
// Link: https://www.codewars.com/kata/57f6ad55cca6e045d2000627

#include <vector>
#include <cmath>

std::vector<int> squareOrSquareRoot(const std::vector<int> &array)
{
    int len = array.size();
    std::vector<int> v(len);
    int i = 0;
    for (auto &n : array)
    {
        if (sqrt(n) == int(sqrt(n)))
        {
            v[i] = sqrt(n);
        }
        else
        {
            v[i] = n * n;
        }
        i++;
    }
    return v;
}