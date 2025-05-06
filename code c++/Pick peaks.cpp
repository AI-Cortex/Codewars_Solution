// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Pick peaks
// link : https://www.codewars.com/kata/5279f6fe5ab7f447890006a7

#include <vector>

PeakData pick_peaks(const std::vector<int> &v)
{
    PeakData result;
    if (v.size() < 3)
        return result;

    int max_index = -1;

    for (size_t i = 1; i < v.size() - 1; i++)
    {

        if (v[i - 1] < v[i])
            max_index = i;

        if (v[i] > v[i + 1] && max_index != -1)
        {
            result.pos.push_back(max_index);
            result.peaks.push_back(v[i]);
            max_index = -1;
        }
    }

    return result;
}