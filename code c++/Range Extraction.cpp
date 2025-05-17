// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Range Extraction
// link : https://www.codewars.com/kata/51ba717bb08c1cd60f00002f

#include <string>
#include <vector>

std::string range_extraction(std::vector<int> args)
{
    std::string s = std::to_string(args[0]);

    for (size_t i = 0, j = 0; i < args.size(); i++)
    {
        for (j = i + 1; j < args.size(); j++)
            if (args[j] != args[j - 1] + 1)
                break;

        if (j == i + 1)
            s += "," + std::to_string(args[j]);
        if (j == i + 2)
            s += "," + std::to_string(args[--j]);
        if (j > i + 2)
            s += "-" + std::to_string(args[--j]);
        i = j - 1;
        if (j + 1 >= args.size())
            break;
    }
    if (s.back() == ',' || s.back() == '-')
        s.pop_back();
    return s;
}