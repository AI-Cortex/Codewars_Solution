// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Find out whether the shape is a cube
// Link: https://www.codewars.com/kata/58d248c7012397a81800005c

bool is_cube(int volume, int side)
{
    if (volume < 1)
        return false;
    if (side * side * side != volume)
        return false;
    return true;
}
