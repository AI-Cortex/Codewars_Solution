// my profile : https://www.codewars.com/users/AI-Cortex
// codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Sum without highest and lowest number
// link : https://www.codewars.com/kata/576b93db1129fcf2200001e6

#include<vector>
using namespace std;

int sum(vector<int> numbers)
{
    if(numbers.size()<3)
        return 0;
    
    int sum = 0;
    int max = numbers[0];
    int min = numbers[0];

    for(auto n: numbers){
        sum += n;
        if(n>max)
            max = n;

        if(n<min)
            min=n;
        }

    return sum-max-min;
}