// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Price of Mangoes
// Link: https://www.codewars.com/kata/57a77726bb9944d000000b06

int mango(int quantity, int price)
{
    int n = quantity / 3 * 2;
    n += quantity % 3;
    return n * price;
}
