// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : A Needle in the Haystack
// link : https://www.codewars.com/kata/56676e8fabd2d1ff3000000c

#include <vector>
#include <string>

std::string findNeedle(const std::vector<std::string> &haystack)
{
    // You may use the function std::to_string to convert numbers to strings for easy concatenation.
    // E.g., ("hi" + std::to_string(123)) ==> "hi123". Of course, that's only one of many approaches.
    for (size_t i = 0; i < haystack.size(); i++)
        if (haystack[i] == "needle")
            return "found the needle at position " + std::to_string(i);
}