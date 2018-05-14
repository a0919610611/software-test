#include "nextdate.h"
#include <gtest/gtest.h>

TEST(Path_Testing, C0)
{
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 6, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 13, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 1, 0)));
    EXPECT_EQ(Date(1812, 1, 16), NextDate(Date(1812, 1, 15)));
    EXPECT_EQ(Date(1812, 2, 1), NextDate(Date(1812, 1, 31)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 6, 0)));
    EXPECT_EQ(Date(1812, 6, 16), NextDate(Date(1812, 6, 15)));
    EXPECT_EQ(Date(1812, 7, 1), NextDate(Date(1812, 6, 30)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 12, 0)));
    EXPECT_EQ(Date(1812, 12, 16), NextDate(Date(1812, 12, 15)));
    EXPECT_EQ(Date(1813, 1, 1), NextDate(Date(1812, 12, 31)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 2, 0)));
    EXPECT_EQ(Date(1812, 2, 16), NextDate(Date(1812, 2, 15)));
    EXPECT_EQ(Date(1812, 2, 29), NextDate(Date(1812, 2, 28)));
    EXPECT_EQ(Date(1812, 3, 1), NextDate(Date(1812, 2, 29)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1813, 2, 0)));
    EXPECT_EQ(Date(1813, 2, 16), NextDate(Date(1813, 2, 15)));
    EXPECT_EQ(Date(1813, 3, 1), NextDate(Date(1813, 2, 28)));
}
TEST(Path_Testing, C1)
{
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 6, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 13, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 1, 0)));
    EXPECT_EQ(Date(1812, 1, 16), NextDate(Date(1812, 1, 15)));
    EXPECT_EQ(Date(1812, 2, 1), NextDate(Date(1812, 1, 31)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 6, 0)));
    EXPECT_EQ(Date(1812, 6, 16), NextDate(Date(1812, 6, 15)));
    EXPECT_EQ(Date(1812, 7, 1), NextDate(Date(1812, 6, 30)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 12, 0)));
    EXPECT_EQ(Date(1812, 12, 16), NextDate(Date(1812, 12, 15)));
    EXPECT_EQ(Date(1813, 1, 1), NextDate(Date(1812, 12, 31)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 2, 0)));
    EXPECT_EQ(Date(1812, 2, 16), NextDate(Date(1812, 2, 15)));
    EXPECT_EQ(Date(1812, 2, 29), NextDate(Date(1812, 2, 28)));
    EXPECT_EQ(Date(1812, 3, 1), NextDate(Date(1812, 2, 29)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1813, 2, 0)));
    EXPECT_EQ(Date(1813, 2, 16), NextDate(Date(1813, 2, 15)));
    EXPECT_EQ(Date(1813, 3, 1), NextDate(Date(1813, 2, 28)));
}
TEST(Path_Testing, C2)
{
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 6, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 13, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 1, 0)));
    EXPECT_EQ(Date(1812, 1, 16), NextDate(Date(1812, 1, 15)));
    EXPECT_EQ(Date(1812, 2, 1), NextDate(Date(1812, 1, 31)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 6, 0)));
    EXPECT_EQ(Date(1812, 6, 16), NextDate(Date(1812, 6, 15)));
    EXPECT_EQ(Date(1812, 7, 1), NextDate(Date(1812, 6, 30)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 12, 0)));
    EXPECT_EQ(Date(1812, 12, 16), NextDate(Date(1812, 12, 15)));
    EXPECT_EQ(Date(1813, 1, 1), NextDate(Date(1812, 12, 31)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 2, 0)));
    EXPECT_EQ(Date(1812, 2, 16), NextDate(Date(1812, 2, 15)));
    EXPECT_EQ(Date(1812, 2, 29), NextDate(Date(1812, 2, 28)));
    EXPECT_EQ(Date(1812, 3, 1), NextDate(Date(1812, 2, 29)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1813, 2, 0)));
    EXPECT_EQ(Date(1813, 2, 16), NextDate(Date(1813, 2, 15)));
    EXPECT_EQ(Date(1813, 3, 1), NextDate(Date(1813, 2, 28)));
}
TEST(Path_Testing, MCDC)
{
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1811, 6, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(2013, 6, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 13, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 0, 15)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 1, 0)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 1, 32)));
    EXPECT_EQ(Date(1812, 1, 16), NextDate(Date(1812, 1, 15)));
    EXPECT_EQ(Date(1812, 3, 16), NextDate(Date(1812, 3, 15)));
    EXPECT_EQ(Date(1812, 5, 16), NextDate(Date(1812, 5, 15)));
    EXPECT_EQ(Date(1812, 7, 16), NextDate(Date(1812, 7, 15)));
    EXPECT_EQ(Date(1812, 8, 16), NextDate(Date(1812, 8, 15)));
    EXPECT_EQ(Date(1812, 10, 16), NextDate(Date(1812, 10, 15)));
    EXPECT_EQ(Date(1812, 2, 1), NextDate(Date(1812, 1, 31)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 6, 0)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 6, 31)));
    EXPECT_EQ(Date(1812, 6, 16), NextDate(Date(1812, 6, 15)));
    EXPECT_EQ(Date(1812, 4, 16), NextDate(Date(1812, 4, 15)));
    EXPECT_EQ(Date(1812, 9, 16), NextDate(Date(1812, 9, 15)));
    EXPECT_EQ(Date(1812, 11, 16), NextDate(Date(1812, 11, 15)));
    EXPECT_EQ(Date(1812, 7, 1), NextDate(Date(1812, 6, 30)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 12, 0)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 12, 32)));
    EXPECT_EQ(Date(1812, 12, 16), NextDate(Date(1812, 12, 15)));
    EXPECT_EQ(Date(1813, 1, 1), NextDate(Date(1812, 12, 31)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 2, 0)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1812, 2, 30)));
    EXPECT_EQ(Date(1812, 2, 16), NextDate(Date(1812, 2, 15)));
    EXPECT_EQ(Date(1812, 2, 29), NextDate(Date(1812, 2, 28)));
    EXPECT_EQ(Date(1812, 3, 1), NextDate(Date(1812, 2, 29)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1813, 2, 0)));
    EXPECT_EQ(Date(-1, -1, -1), NextDate(Date(1813, 2, 29)));
    EXPECT_EQ(Date(1813, 2, 16), NextDate(Date(1813, 2, 15)));
    EXPECT_EQ(Date(1813, 3, 1), NextDate(Date(1813, 2, 28)));
}
int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
