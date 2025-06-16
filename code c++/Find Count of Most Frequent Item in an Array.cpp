// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Find Count of Most Frequent Item in an Array
// link : https://www.codewars.com/kata/56582133c932d8239900002e

#include <vector>
#include <unordered_map>

unsigned int most_frequent_item_count(const std::vector<int> &collection)
{
    if (collection.empty())
        return 0;

    std::unordered_map<int, unsigned int> freq;
    unsigned int max_count = 0;

    for (int num : collection)
    {
        max_count = std::max(max_count, ++freq[num]);
    }

    return max_count;
}