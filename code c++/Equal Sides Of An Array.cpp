// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Equal Sides Of An Array
// Link: https://www.codewars.com/kata/5679aa472b8f57fb8c000047

#include <vector>
using namespace std;

int find_even_index(const vector<int> numbers)
{
    long long rsum = 0;
    for (auto n : numbers)
        rsum += n;
    long long lsum = 0;
    int i, temp = 0;
    int len = numbers.size();
    for (i = 0; i < len; i++)
    {
        lsum += temp;
        temp = numbers[i];
        rsum -= temp;
        if (lsum == rsum)
            break;
    }
    if (i < len)
        return i;
    return -1;
}
