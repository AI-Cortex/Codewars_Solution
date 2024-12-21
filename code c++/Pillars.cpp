// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Pillars
// Link: https://www.codewars.com/kata/5bb0c58f484fcd170700063d

long pillars(int num_of_pillars, int distance, int width) {
    if (num_of_pillars <= 1) return 0;
  
    return (num_of_pillars - 1) * (distance * 100) + (num_of_pillars - 2) * width;
}