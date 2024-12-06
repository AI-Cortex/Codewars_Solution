// my profile : https://www.codewars.com/users/AI-Cortex
// codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Multiplication table for number
// link : https://www.codewars.com/kata/5a2fd38b55519ed98f0000ce

#include <string>

std::string multi_table(int number)
{
    std::string s = "";
    for(int i=1; i<11; i++){
        s += std::to_string(i) + " * " + std::to_string(number) + " = " + std::to_string(i*number);
        if(i!=10)
            s+="\n";
    }
    
    return s;
}