#ifndef TRIANGLE
#define TRIANGLE

enum TriangleType { Equilateral,
    Scalene,
    Isosceles,
    NotTriangle,
    ValueRangeError
};

TriangleType GetTriangleType(int a, int b, int c);

#endif
