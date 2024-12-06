// my profile : https://www.codewars.com/users/AI-Cortex
// codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Convert number to reversed array of digits
// link : https://www.codewars.com/kata/5583090cbe83f4fd8c000051


std::vector<int> digitize(unsigned long n) 
{        
    if(n==0){
        return {0};
    }
    std::vector<int> v;
    while(n>0){
        v.push_back(n%10);
        n/=10;
    }
    return v;
}