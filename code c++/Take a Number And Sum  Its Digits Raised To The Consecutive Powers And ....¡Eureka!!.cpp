// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Take a Number And Sum  Its Digits Raised To The Consecutive Powers And ....¡Eureka!!
// link : https://www.codewars.com/kata/5626b561280a42ecc50000d1

#include <vector>
#include <cmath>

bool f(unsigned int n)
{
    int p = log10(n) + 1;
    unsigned int m = n;
    unsigned int sum = 0;
    while (n)
    {
        sum += pow(n % 10, p);
        n /= 10;
        p--;
    }
    return sum == m;
}

std::vector<unsigned int> sumDigPow(unsigned int a, unsigned int b)
{
    std::vector<unsigned int> v;
    for (auto i = a; i <= b; i++)
        if (f(i))
            v.push_back(i);

    return v;
}
