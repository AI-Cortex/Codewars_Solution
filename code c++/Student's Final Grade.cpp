// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Student's Final Grade
// Link: https://www.codewars.com/kata/5ad0d8356165e63c140014d4

int final_grade(int exam, int projects)
{
    if (exam > 90 || projects > 10)
    {
        return 100;
    }
    if (exam > 75 && projects >= 5)
    {
        return 90;
    }
    if (exam > 50 && projects >= 2)
    {
        return 75;
    }
    return 0;
}