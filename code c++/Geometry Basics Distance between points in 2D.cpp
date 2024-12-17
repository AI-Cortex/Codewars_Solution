// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Geometry Basics: Distance between points in 2D
// Link: https://www.codewars.com/kata/58dced7b702b805b200000be

#include <cmath>

double distance_between_two_points(const Point& a, const Point& b) {
    return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}