#include "triangle.h"
#include <gtest/gtest.h>

TEST(Path_Testing,C2)
{
    EXPECT_EQ(ValueRangeError, GetTriangleType(0, 100, 100));
    EXPECT_EQ(NotTriangle, GetTriangleType(4, 1, 2));
    EXPECT_EQ(Equilateral, GetTriangleType(5, 5, 5));
    EXPECT_EQ(Isosceles, GetTriangleType(2, 2, 3));
    EXPECT_EQ(Scalene, GetTriangleType(3, 4, 5));
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
