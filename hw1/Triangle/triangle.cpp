#include "triangle.h"
#include <bits/stdc++.h>
using namespace std;

TriangleType GetTriangleType(int a, int b, int c)
{
    if (a == b && b == c) {
        return Equilateral;
    }
    return NotTriangle;
};
