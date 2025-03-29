// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Product of consecutive Fib numbers
// Link: https://www.codewars.com/kata/5541f58a944b85ce6d00006a

#include <vector>
typedef unsigned long long ull;
class ProdFib
{
public:
    static std::vector<ull> productFib(ull prod)
    {

        ull temp;
        ull a = 0, b = 1;
        while (a * b < prod)
        {
            temp = a + b;
            a = b;
            b = temp;
        }
        if (a * b == prod)
            return {a, b, true};
        return {a, b, false};
    }
};
