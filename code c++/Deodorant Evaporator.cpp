// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Deodorant Evaporator
// link : https://www.codewars.com/kata/5506b230a11c0aeab3000c1f

using namespace std;
class Evaporator
{

public:
    static int evaporator(double content, double evap_per_day, double threshold)
    {
        int days = 0;
        double total = 100;
        while (total >= threshold)
        {
            total -= (total * (evap_per_day / 100));
            days++;
        }
        return days;
    }
};
