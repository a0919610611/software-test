#ifndef TRIANGLE
#define TRIANGLE

enum TriangleType { Equilateral,
    Scalene,
    Isosceles,
    NotTriangle };

TriangleType GetTriangleType(int a, int b, int c)
{

    return NotTriangle;
};

#endif
