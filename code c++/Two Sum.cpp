// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Two Sum
// link : https://www.codewars.com/kata/52c31f8e6605bcc646000082

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int> &numbers, int target)
{
    std::unordered_map<int, int> m;
    for (size_t i = 0; i < numbers.size(); i++)
    {
        int diff = target - numbers[i];

        if (m.find(diff) != m.end())
            return {m[diff], i};

        m[numbers[i]] = i;
    }
    return {0, 0};
}