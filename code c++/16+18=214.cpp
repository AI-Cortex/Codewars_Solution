// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : 16+18=214
// link : https://www.codewars.com/kata/5effa412233ac3002a9e471d

using namespace std;

unsigned add(unsigned x, unsigned y)
{
    string s;
    while (x || y)
    {
        int r = x % 10 + y % 10;
        s = to_string(r) + s;

        x /= 10;
        y /= 10;
    }

    if (s.empty())
        return 0;
    return stoul(s);
}
