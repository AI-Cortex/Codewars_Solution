
// my profile : https://www.codewars.com/users/AI-Cortex
// codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Find numbers which are divisible by given number
// link : https://www.codewars.com/kata/55edaba99da3a9c84000003b

std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
    std::vector <int> v;
    for(auto n : numbers){
        if(n%divisor==0)
            v.push_back(n);
    }
    return v;
}