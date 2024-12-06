// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : They say that only the name is long enough to attract attention. They also said that only a simple Kata will have someone to solve it. This is a sadly story #1: Are they opposite?
// link : https://www.codewars.com/kata/574b1916a3ebd6e4fa0012e7

#include <string>

bool isOpposite(const std::string& s1, const std::string& s2) {
    int len_1 = s1.length(), len_2 = s2.length();
    if(len_1 == 0 || len_1 != len_2)
        return false;
    
    for(int i=0; i<len_1; i++){
        if((tolower(s1[i]) != tolower(s2[i]))||(islower(s1[i]) == islower(s2[i])))
            return false;
    }
    return true;
}