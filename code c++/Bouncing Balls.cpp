// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Bouncing Balls
// link : https://www.codewars.com/kata/5544c7a5cb454edb3c000047

using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window)
    {
        if (h <= 0 || window >= h || bounce <= 0 || 1 <= bounce)
            return -1;
        int t = 0;

        while (true)
        {
            h *= bounce;
            if (h > window)
                t += 2;
            else
                break;
        }

        return t + 1;
    }
};