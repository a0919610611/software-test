#include "nextdate.h"
#include <gtest/gtest.h>

TEST(Boundary_Value, weak_normal)
{

    // year
    EXPECT_EQ(Date(1812, 6, 16), NextDate(Date(1812, 6, 15)));
    EXPECT_EQ(Date(1813, 6, 16), NextDate(Date(1813, 6, 15)));
    EXPECT_EQ(Date(1912, 6, 16), NextDate(Date(1912, 6, 15)));
    EXPECT_EQ(Date(2011, 6, 16), NextDate(Date(2011, 6, 15)));
    EXPECT_EQ(Date(2012, 6, 16), NextDate(Date(2012, 6, 15)));

    // month
    EXPECT_EQ(Date(1912, 1, 16), NextDate(Date(1912, 1, 15)));
    EXPECT_EQ(Date(1912, 2, 16), NextDate(Date(1912, 2, 15)));
    EXPECT_EQ(Date(1912, 6, 16), NextDate(Date(1912, 6, 15)));
    EXPECT_EQ(Date(1912, 11, 16), NextDate(Date(1912, 11, 15)));
    EXPECT_EQ(Date(1912, 12, 16), NextDate(Date(1912, 12, 15)));

    // day
    EXPECT_EQ(Date(1912, 6, 2), NextDate(Date(1912, 6, 1)));
    EXPECT_EQ(Date(1912, 6, 3), NextDate(Date(1912, 6, 2)));
    EXPECT_EQ(Date(1912, 6, 16), NextDate(Date(1912, 6, 15)));
    EXPECT_EQ(Date(1912, 6, 30), NextDate(Date(1912, 6, 29)));
    EXPECT_EQ(Date(1912, 7, 1), NextDate(Date(1912, 6, 30)));
}

/*
TEST(Boundary_Value, weak_robust)
{
}

TEST(Boundary_Value, strong_normal)
{
}

TEST(Boundary_Value, strong_robust)
{
}

TEST(Edge_Case, leap_year)
{
}

TEST(Equivalence_Class, weak_normal)
{
}

TEST(Equivalence_Class, weak_robust)
{
}

TEST(Equivalence_Class, strong_robust)
{
}

TEST(Decision_Table, decisions)
{
}

*/
int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
