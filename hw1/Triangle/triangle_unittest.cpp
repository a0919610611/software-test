#include "triangle.h"
#include <gtest/gtest.h>

TEST(Boundary_Value, normal_weak)
{
    EXPECT_EQ(Isosceles, GetTriangleType(100, 100, 1));
    EXPECT_EQ(Isosceles, GetTriangleType(100, 100, 2));
    EXPECT_EQ(Equilateral, GetTriangleType(100, 100, 100));
    EXPECT_EQ(Isosceles, GetTriangleType(100, 100, 199));
    EXPECT_EQ(NotTriangle, GetTriangleType(100, 100, 200));
    EXPECT_EQ(Isosceles, GetTriangleType(100, 1, 100));
    EXPECT_EQ(Isosceles, GetTriangleType(100, 2, 100));
    EXPECT_EQ(Equilateral, GetTriangleType(100, 100, 100));
    EXPECT_EQ(Isosceles, GetTriangleType(100, 199, 100));
    EXPECT_EQ(NotTriangle, GetTriangleType(100, 200, 100));
    EXPECT_EQ(Isosceles, GetTriangleType(1, 100, 100));
    EXPECT_EQ(Isosceles, GetTriangleType(2, 100, 100));
    EXPECT_EQ(Equilateral, GetTriangleType(100, 100, 100));
    EXPECT_EQ(Isosceles, GetTriangleType(199, 100, 100));
    EXPECT_EQ(NotTriangle, GetTriangleType(200, 100, 100));
}

TEST(Boundary_Value, normal_strong)
{
    EXPECT_EQ(Equilateral, GetTriangleType(1, 1, 1));
    EXPECT_EQ(NotTriangle, GetTriangleType(1, 1, 2));
    EXPECT_EQ(NotTriangle, GetTriangleType(1, 1, 100));
    EXPECT_EQ(NotTriangle, GetTriangleType(1, 1, 199));
    EXPECT_EQ(NotTriangle, GetTriangleType(1, 1, 200));
    EXPECT_EQ(Isosceles, GetTriangleType(1, 2, 2));
    EXPECT_EQ(Isosceles, GetTriangleType(1, 100, 100));
    EXPECT_EQ(Isosceles, GetTriangleType(1, 199, 199));
    EXPECT_EQ(Isosceles, GetTriangleType(1, 200, 200));
}

TEST(Boundary_Value, robust_weak)
{
    EXPECT_EQ(ValueRangeError, GetTriangleType(0, 100, 100));
    EXPECT_EQ(ValueRangeError, GetTriangleType(201, 100, 100));
    EXPECT_EQ(ValueRangeError, GetTriangleType(100, 0, 100));
    EXPECT_EQ(ValueRangeError, GetTriangleType(100, 201, 100));
    EXPECT_EQ(ValueRangeError, GetTriangleType(100, 100, 0));
    EXPECT_EQ(ValueRangeError, GetTriangleType(100, 100, 201));
}

TEST(Boundary_Value, robust_strong)
{
    EXPECT_EQ(ValueRangeError, GetTriangleType(0, 0, 100));
    EXPECT_EQ(ValueRangeError, GetTriangleType(201, 201, 100));
    EXPECT_EQ(ValueRangeError, GetTriangleType(0, 201, 100));
    EXPECT_EQ(ValueRangeError, GetTriangleType(100, 0, 0));
    EXPECT_EQ(ValueRangeError, GetTriangleType(100, 201, 201));
    EXPECT_EQ(ValueRangeError, GetTriangleType(100, 201, 0));
    EXPECT_EQ(ValueRangeError, GetTriangleType(0, 0, 0));
    EXPECT_EQ(ValueRangeError, GetTriangleType(201, 201, 201));
}



int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
