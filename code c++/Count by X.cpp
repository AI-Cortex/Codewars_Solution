// my profile : https://www.codewars.com/users/AI-Cortex
// codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Count by X
// link : https://www.codewars.com/kata/5513795bd3fafb56c200049e


#include <vector>

std::vector<int> countBy(int x,int n){
    std::vector<int> v;
    for(int i=1; i<=n; i++)
        v.push_back(i*x);
    return v;
}