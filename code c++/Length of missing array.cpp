// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Length of missing array
// link : https://www.codewars.com/kata/57b6f5aadb5b3d0ae3000611

template <class TYPE>
int getLengthOfMissingArray(std::vector<std::vector<TYPE>> arrayOfArrays)
{
    if (arrayOfArrays.size() == 0)
        return 0;
    std::vector<size_t> v;
    for (const auto &a : arrayOfArrays)
        v.push_back(a.size());
    sort(v.begin(), v.end());
    if (v[0] == 0)
        return 0;
    for (size_t i = 1; i < v.size(); ++i)
        if (v[i] != v[i - 1] + 1)
            return v[i - 1] + 1;
    return 0;
}