#include "commission.h"
#include <gtest/gtest.h>

TEST(Path_Testing,C0)
{
  EXPECT_DOUBLE_EQ(640.0, CalCommission(35, 40, 45));
  EXPECT_DOUBLE_EQ(-1.0, CalCommission(0, 40, 45));
  EXPECT_DOUBLE_EQ(160.75, CalCommission(30, 1, 1));
  EXPECT_DOUBLE_EQ(95.5, CalCommission(20, 1, 1));
}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
