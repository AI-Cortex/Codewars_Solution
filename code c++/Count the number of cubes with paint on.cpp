// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Count the number of cubes with paint on
// Link: https://www.codewars.com/kata/5763bb0af716cad8fb000580

int countSquares(int cuts)
{
    return (cuts)? 6*cuts*cuts+2 : 1;
}
