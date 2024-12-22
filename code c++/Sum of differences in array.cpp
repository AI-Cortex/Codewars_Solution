// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sum of differences in array
// Link: https://www.codewars.com/kata/5b73fe9fb3d9776fbf00009e

#include <vector>
#include <algorithm>
using namespace std;

int sumOfDifferences(const std::vector<int>& arr){
    int len = arr.size();
    if(len<2)
        return 0;
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    int sum = 0;
    for (int i = 0; i < len - 1; i++) {
        sum += sortedArr[i + 1] - sortedArr[i];
    }

    return sum;
}