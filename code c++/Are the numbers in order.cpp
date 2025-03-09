// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Are the numbers in order?
// Link: https://www.codewars.com/kata/56b7f2f3f18876033f000307

bool isAscOrder(std::vector<int> arr)
{
    for (size_t i = 1; i < arr.size(); i++)
        if (arr[i - 1] >= arr[i])
            return false;
    return true;
}
