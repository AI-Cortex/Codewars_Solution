// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Quadrants
// Link: https://www.codewars.com/kata/643af0fa9fa6c406b47c5399

int quadrant(int x, int y) {
    if(x>0 && y>0)
        return 1;
    if(x<0 && y>0)
        return 2;
    if(x<0 && y<0)
        return 3;
    else
        return 4;
}
