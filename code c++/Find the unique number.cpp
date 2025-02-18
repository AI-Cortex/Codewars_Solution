// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Find the unique number
// link : https://www.codewars.com/kata/585d7d5adb20cf33cb000235

float find_uniq(const std::vector<float> &v)
{
    float n = (v[0] == v[1]) ? v[0] : v[2];
    for (auto num : v)
        if (num != n)
            return num;
    return n;
}