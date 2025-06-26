// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Balanced Number (Special Numbers Series #1 )
// link : https://www.codewars.com/kata/5a4e3782880385ba68000018

#include <string>
#include <cmath>
using namespace std;

int sum(string s)
{
    int total(0);

    for (auto ch : s)
        total += ch - '0';
    return total;
}

string balancedNum(unsigned long long int number)
{
    int len = log10(number) + 1;
    string s = to_string(number);
    if (len < 3)
        return "Balanced";

    int left_sum, right_sum;

    if (len % 2 == 0)
    {
        int mid = len / 2;
        left_sum = sum(s.substr(0, mid - 1));
        right_sum = sum(s.substr(mid + 1));
    }
    else
    {
        int mid = len / 2;
        left_sum = sum(s.substr(0, mid));
        right_sum = sum(s.substr(mid + 1));
    }

    return left_sum == right_sum ? "Balanced" : "Not Balanced";
}
