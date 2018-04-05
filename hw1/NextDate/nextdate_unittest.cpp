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

TEST(Boundary_Value, weak_robust)
{
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 6, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2013, 6, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1912, 0, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1912, 13, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1912, 6, 32)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1912, 6, 0)));
}

TEST(Boundary_Value, strong_normal)
{
    EXPECT_EQ(Date(1812, 1, 2), NextDate(Date(1812, 1, 1)));
    EXPECT_EQ(Date(1813, 1, 2), NextDate(Date(1813, 1, 1)));
    EXPECT_EQ(Date(1912, 1, 2), NextDate(Date(1912, 1, 1)));
    EXPECT_EQ(Date(2011, 1, 2), NextDate(Date(2011, 1, 1)));
    EXPECT_EQ(Date(2012, 1, 2), NextDate(Date(2012, 1, 1)));
    EXPECT_EQ(Date(1812, 1, 3), NextDate(Date(1812, 1, 2)));
    EXPECT_EQ(Date(1813, 1, 3), NextDate(Date(1813, 1, 2)));
    EXPECT_EQ(Date(1912, 1, 3), NextDate(Date(1912, 1, 2)));
    EXPECT_EQ(Date(2011, 1, 3), NextDate(Date(2011, 1, 2)));
    EXPECT_EQ(Date(2012, 1, 3), NextDate(Date(2012, 1, 2)));
    EXPECT_EQ(Date(1812, 1, 16), NextDate(Date(1812, 1, 15)));
    EXPECT_EQ(Date(1813, 1, 16), NextDate(Date(1813, 1, 15)));
    EXPECT_EQ(Date(1912, 1, 16), NextDate(Date(1912, 1, 15)));
    EXPECT_EQ(Date(2011, 1, 16), NextDate(Date(2011, 1, 15)));
    EXPECT_EQ(Date(2012, 1, 16), NextDate(Date(2012, 1, 15)));
    EXPECT_EQ(Date(1812, 1, 31), NextDate(Date(1812, 1, 30)));
    EXPECT_EQ(Date(1813, 1, 31), NextDate(Date(1813, 1, 30)));
    EXPECT_EQ(Date(1912, 1, 31), NextDate(Date(1912, 1, 30)));
    EXPECT_EQ(Date(2011, 1, 31), NextDate(Date(2011, 1, 30)));
    EXPECT_EQ(Date(2012, 1, 31), NextDate(Date(2012, 1, 30)));
    EXPECT_EQ(Date(1812, 2, 1), NextDate(Date(1812, 1, 31)));
    EXPECT_EQ(Date(1813, 2, 1), NextDate(Date(1813, 1, 31)));
    EXPECT_EQ(Date(1912, 2, 1), NextDate(Date(1912, 1, 31)));
    EXPECT_EQ(Date(2011, 2, 1), NextDate(Date(2011, 1, 31)));
    EXPECT_EQ(Date(2012, 2, 1), NextDate(Date(2012, 1, 31)));
    EXPECT_EQ(Date(2012, 2, 1), NextDate(Date(2012, 1, 31)));
}

TEST(Boundary_Value, strong_robust)
{
    // 2 fault
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 0, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 13, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2013, 0, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2013, 13, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1912, 0, 0)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1912, 0, 32)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1912, 13, 0)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1912, 13, 32)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 6, 0)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 6, 32)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2013, 6, 0)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2013, 6, 32)));
    // 3fault
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 0, 0)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 0, 32)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 13, 0)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 13, 32)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2013, 0, 0)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2013, 0, 32)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2013, 13, 0)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2013, 13, 32)));
}
TEST(Edge_Case, leap_year)
{
    EXPECT_EQ(Date(1812, 1, 2), NextDate(Date(1812, 1, 1)));
    EXPECT_EQ(Date(2013, 1, 1), NextDate(Date(2012, 12, 31)));
    EXPECT_EQ(Date(1812, 2, 29), NextDate(Date(1812, 2, 28)));
    EXPECT_EQ(Date(1812, 3, 1), NextDate(Date(1812, 2, 29)));
    EXPECT_EQ(Date(1900, 3, 1), NextDate(Date(1900, 2, 28)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1900, 2, 29)));
    EXPECT_EQ(Date(2000, 2, 29), NextDate(Date(2000, 2, 28)));
    EXPECT_EQ(Date(2000, 3, 1), NextDate(Date(2000, 2, 29)));
}
TEST(Equivalence_Class, weak_normal)
{

    EXPECT_EQ(Date(1912, 6, 16), NextDate(Date(1912, 6, 15)));
}

TEST(Equivalence_Class, weak_robust)
{
    EXPECT_EQ(Date(1912, 6, 16), NextDate(Date(1912, 6, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1912, 6, -1)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1912, 13, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1912, 6, -1)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1912, 6, 32)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 6, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2013, 6, 15)));
}

TEST(Equivalence_Class, strong_robust)
{
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1912, -1, -1)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 6, -1)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 13, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, -1, -1)));
}

TEST(Equivalence_Class, strong_normal)
{
    EXPECT_EQ(Date(1912, 6, 16), NextDate(Date(1912, 6, 15)));
}

TEST(Decision_Table, decisions)
{
    EXPECT_EQ(Date(2001, 4, 16), NextDate(Date(2001, 4, 15)));
    EXPECT_EQ(Date(2001, 5, 1), NextDate(Date(2001, 4, 30)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2001, 4, 31)));
    EXPECT_EQ(Date(2001, 1, 16), NextDate(Date(2001, 1, 15)));
    EXPECT_EQ(Date(2001, 2, 1), NextDate(Date(2001, 1, 31)));
    EXPECT_EQ(Date(2001, 12, 16), NextDate(Date(2001, 12, 15)));
    EXPECT_EQ(Date(2002, 1, 1), NextDate(Date(2001, 12, 31)));
    EXPECT_EQ(Date(2001, 2, 16), NextDate(Date(2001, 2, 15)));
    EXPECT_EQ(Date(2004, 2, 29), NextDate(Date(2004, 2, 28)));
    EXPECT_EQ(Date(2001, 3, 1), NextDate(Date(2001, 2, 28)));
    EXPECT_EQ(Date(2004, 3, 1), NextDate(Date(2004, 2, 29)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2001, 2, 29)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2001, 2, 30)));
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
