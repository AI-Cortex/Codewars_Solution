// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Perimeter of squares in a rectangle
// link : https://www.codewars.com/kata/559a28007caad2ac4e000083

typedef unsigned long long ull;
class SumFct
{
public:
    static ull perimeter(int n)
    {
        ull a = 1, b = 1;
        ull s = 0;
        ull t;
        for (int i = 0; i <= n; i++)
        {
            s += a;
            t = b;
            b += a;
            a = t;
        }
        return 4 * s;
    }
};