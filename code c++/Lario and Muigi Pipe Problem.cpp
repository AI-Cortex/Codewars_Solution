// my profile : https://www.codewars.com/users/AI-Cortex
// codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////// 
// name : Lario and Muigi Pipe Problem
// link : https://www.codewars.com/kata/56b29582461215098d00000f

#include <vector>

std::vector<int> pipe_fix(const std::vector<int>& nums) {
    int max = nums[nums.size() - 1];
    int min = nums[0];
    
    std::vector<int> a(max-min+1);
    int index = 0;
    for (int i = min; i <= max; i++){
        a[index++] = i;
    }

    return a;
}