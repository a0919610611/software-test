#include "triangle.h"
#include <bits/stdc++.h>
using namespace std;

TriangleType GetTriangleType(int a, int b, int c)
{
    // two edges' sum greter than 3'rd edge
    if (not(a + b > c and b + c > a and a + c > b)) {
        return NotTriangle;
    }
    if (a == b and b == c) {
        return Equilateral;
    }
    if (a != b and a != c and b != c) {
        return Scalene;
    } else {
        return Isosceles;
    }
    return NotTriangle;
};
