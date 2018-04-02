#include "triangle.h"
#include <gtest/gtest.h>

TEST(Boundary_Value, normal)
{
    // From slides
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

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
