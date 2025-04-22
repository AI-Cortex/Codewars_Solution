// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Beginner - Lost Without a Map
// link : https://www.codewars.com/kata/57f781872e3d8ca2a000007e

std::vector<int> maps(const std::vector<int> &values)
{
    std::vector<int> v(values);
    for_each(v.begin(), v.end(), [](int &x)
             { x *= 2; });
    return v;
}