// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: RGB To Hex Conversion
// Link: https://www.codewars.com/kata/513e08acc600c94f01000001

#include <string>

std::string f(int n)
{
    std::string s;
    if (n <= 0)
        return "00";
    if (n >= 255)
        return "FF";
    while (n)
    {
        int temp = n % 16;
        if (temp < 10)
            s = std::to_string(temp) + s;
        else
            s = static_cast<char>(temp - 10 + 'A') + s;
        n /= 16;
    }
    if (s.size() < 2)
        s = "0" + s;
    return s;
}

std::string rgb_to_hex(int r, int g, int b)
{
    return f(r) + f(g) + f(b);
}
