// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Is the string uppercase?
// link : https://www.codewars.com/kata/56cd44e1aa4ac7879200010b

#include <string>

bool is_uppercase(const std::string &s) {
    for(int i=0; i<s.length() ; i++){
        if(islower(s[i]))
            return false;
    }
    return true;
}