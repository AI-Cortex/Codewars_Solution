// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Multiplication table
// link : https://www.codewars.com/kata/534d2f5b5371ecf8d2000a08

#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
vector<vector<int>> multiplication_table(int n)
{

    vector<vector<int>> table;
    table.reserve(n);

    vector<int> base(n, 1), v(n);

    partial_sum(base.begin(), base.end(), base.begin());
    for (int i = 1; i <= n; i++)
    {
        transform(base.begin(), base.end(), v.begin(), [i](int x)
                  { return x * i; });
        table.push_back(v);
    }

    return table;
}