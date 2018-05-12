#include "nextdate.h"
#include <gtest/gtest.h>

TEST(Path_Testing,C0)
{
  EXPECT_EQ(Date(-1,-1, -1), NextDate(Date(1811, 6, 15)));
  EXPECT_EQ(Date(-1,-1, -1), NextDate(Date(1812, 13, 15)));
  EXPECT_EQ(Date(-1,-1, -1), NextDate(Date(1812, 1, 0)));
  EXPECT_EQ(Date(1812, 1, 16), NextDate(Date(1812, 1, 15)));
  EXPECT_EQ(Date(1812, 2, 1), NextDate(Date(1812, 1, 31)));
  EXPECT_EQ(Date(-1,-1,-1), NextDate(Date(1812, 6, 0)));
  EXPECT_EQ(Date(1812, 6,16), NextDate(Date(1812, 6, 15)));
  EXPECT_EQ(Date(1812, 7,1), NextDate(Date(1812, 6, 30)));
  EXPECT_EQ(Date(-1,-1,-1), NextDate(Date(1812, 12, 0)));
  EXPECT_EQ(Date(1812, 12,16), NextDate(Date(1812, 12, 15)));
  EXPECT_EQ(Date(1813, 1,1), NextDate(Date(1812, 12, 31)));
  EXPECT_EQ(Date(-1,-1,-1), NextDate(Date(1812, 2, 0)));
  EXPECT_EQ(Date(1812,2,16), NextDate(Date(1812, 2, 15)));
  EXPECT_EQ(Date(1812,2,29), NextDate(Date(1812, 2, 28)));
  EXPECT_EQ(Date(1812,3,1), NextDate(Date(1812, 2, 29)));
  EXPECT_EQ(Date(-1,-1,-1), NextDate(Date(1813, 2, 0)));
  EXPECT_EQ(Date(1813,2,16), NextDate(Date(1813, 2, 15)));
  EXPECT_EQ(Date(1813,3,1), NextDate(Date(1813, 2, 28)));

}
int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
