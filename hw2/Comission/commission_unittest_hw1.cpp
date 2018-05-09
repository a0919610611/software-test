#include "commission.h"
#include <gtest/gtest.h>

TEST(Boundary_Value, weak_normal)
{
    // all mid
    EXPECT_DOUBLE_EQ(640.0, CalCommission(35, 40, 45));
    // lock
    EXPECT_DOUBLE_EQ(334.0, CalCommission(1, 40, 45));
    EXPECT_DOUBLE_EQ(343.0, CalCommission(2, 40, 45));
    EXPECT_DOUBLE_EQ(946.0, CalCommission(69, 40, 45));
    EXPECT_DOUBLE_EQ(955.0, CalCommission(70, 40, 45));

    // stock
    EXPECT_DOUBLE_EQ(406.0, CalCommission(35, 1, 45));
    EXPECT_DOUBLE_EQ(412.0, CalCommission(35, 2, 45));
    EXPECT_DOUBLE_EQ(874.0, CalCommission(35, 79, 45));
    EXPECT_DOUBLE_EQ(880.0, CalCommission(35, 80, 45));

    // barrel
    EXPECT_DOUBLE_EQ(420.0, CalCommission(35, 40, 1));
    EXPECT_DOUBLE_EQ(425.0, CalCommission(35, 40, 2));
    EXPECT_DOUBLE_EQ(860.0, CalCommission(35, 40, 89));
    EXPECT_DOUBLE_EQ(865.0, CalCommission(35, 40, 90));
}

TEST(Boundary_Value, weak_robust)
{
    // lock
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(0, 40, 45));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(71, 40, 45));

    // stock
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(35, 0, 45));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(35, 81, 45));

    // barrel
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(35, 40, 0));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(35, 40, 91));
}

TEST(Boundary_Value, strong_normal)
{
    // selectd, not all
    EXPECT_DOUBLE_EQ(10.0, CalCommission(1, 1, 1));
    EXPECT_DOUBLE_EQ(14.5, CalCommission(2, 1, 1));
    EXPECT_DOUBLE_EQ(492.0, CalCommission(69, 1, 1));
    EXPECT_DOUBLE_EQ(501.0, CalCommission(70, 1, 1));
    EXPECT_DOUBLE_EQ(17.5, CalCommission(2, 2, 1));
    EXPECT_DOUBLE_EQ(960.0, CalCommission(69, 79, 1));
    EXPECT_DOUBLE_EQ(975.0, CalCommission(70, 80, 1));
    EXPECT_DOUBLE_EQ(20.0, CalCommission(2, 2, 2));
    EXPECT_DOUBLE_EQ(1400.0, CalCommission(69, 79, 89));
    EXPECT_DOUBLE_EQ(1420.0, CalCommission(70, 80, 90));
}

TEST(Boundary_Value, strong_robust)
{
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(0, 0, 0));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(0, 81, 0));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(0, 0, 91));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(0, 81, 91));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(71, 0, 0));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(71, 81, 0));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(71, 0, 91));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(71, 81, 91));
}

TEST(Equivalence_Class, weak_normal)
{
    EXPECT_DOUBLE_EQ(640.0, CalCommission(35, 40, 45));
}

TEST(Equivalence_Class, weak_robust)
{
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(-1, 40, 45));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(71, 40, 45));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(35, -1, 45));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(35, 81, 45));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(35, 40, -1));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(35, 40, 91));
}

TEST(Equivalence_Class, strong_robust)
{
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(-1, -1, 45));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(-1, 40, -1));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(35, -1, -1));
    EXPECT_DOUBLE_EQ(-1.0, CalCommission(-1, -1, -1));
}
/*
 * the problem is not suitable for decision table based testing
TEST(Decision_Table, decisions)
{
}
*/
int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
