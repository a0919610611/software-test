#include "triangle.h"
#include <gtest/gtest.h>
TEST(Path_Testing,C0)
{
    EXPECT_EQ(ValueRangeError, GetTriangleType(0, 100, 100));
    EXPECT_EQ(NotTriangle, GetTriangleType(4, 1, 2));
    EXPECT_EQ(Equilateral, GetTriangleType(5, 5, 5));
    EXPECT_EQ(Isosceles, GetTriangleType(2, 2, 3));
    EXPECT_EQ(Scalene, GetTriangleType(3, 4, 5));
}
TEST(Path_Testing,C1)
{
    EXPECT_EQ(ValueRangeError, GetTriangleType(0, 100, 100));
    EXPECT_EQ(NotTriangle, GetTriangleType(4, 1, 2));
    EXPECT_EQ(Equilateral, GetTriangleType(5, 5, 5));
    EXPECT_EQ(Isosceles, GetTriangleType(2, 2, 3));
    EXPECT_EQ(Scalene, GetTriangleType(3, 4, 5));
}
TEST(Path_Testing,C2)
{
    EXPECT_EQ(ValueRangeError, GetTriangleType(0, 100, 100));
    EXPECT_EQ(NotTriangle, GetTriangleType(4, 1, 2));
    EXPECT_EQ(Equilateral, GetTriangleType(5, 5, 5));
    EXPECT_EQ(Isosceles, GetTriangleType(2, 2, 3));
    EXPECT_EQ(Scalene, GetTriangleType(3, 4, 5));
}
TEST(Path_Testing,MCDC)
{
    // a <1
    EXPECT_EQ(ValueRangeError, GetTriangleType(0, 100, 100));
    // a>200
    EXPECT_EQ(ValueRangeError, GetTriangleType(201, 100, 100));
    // b<1
    EXPECT_EQ(ValueRangeError, GetTriangleType(1, 0, 100));
    // b>200
    EXPECT_EQ(ValueRangeError, GetTriangleType(1, 201, 100));
   // c<1
    EXPECT_EQ(ValueRangeError, GetTriangleType(1, 100, 0));
    // c>200
    EXPECT_EQ(ValueRangeError, GetTriangleType(1, 100, 201));

    EXPECT_EQ(NotTriangle, GetTriangleType(4, 1, 2));
    EXPECT_EQ(NotTriangle, GetTriangleType(1, 4, 2));
    EXPECT_EQ(NotTriangle, GetTriangleType(1, 2, 4));
    // a==b && b==c
    EXPECT_EQ(Equilateral, GetTriangleType(5, 5, 5));
    // a!=b && b==c
    EXPECT_EQ(Isosceles, GetTriangleType(3, 2, 2));
    // a==b && b!=c
    EXPECT_EQ(Isosceles, GetTriangleType(2, 2, 3));
    // a==c  && a!=b && b!=c
    EXPECT_EQ(Isosceles, GetTriangleType(2, 3, 2));
    // a!=b and a!=c and b!=c
    EXPECT_EQ(Scalene, GetTriangleType(3, 4, 5));
}
int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
