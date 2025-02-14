// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Tribonacci Sequence
// Link: https://www.codewars.com/kata/556deca17c58da83c00002db

std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    int k = 3;
    if (n < 3)
        k = n;

    std::vector<int> result(signature.begin(), signature.begin() + k);
    for (int i = 3; i < n; i++)
        result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);

    return result;
}