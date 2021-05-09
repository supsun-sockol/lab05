#include "../Account.cpp"
//#include <Transaction.h>

#include "gtest/gtest.h"

TEST(Print, TestSuperTest)
{
	Account A(3, 2);
	EXPECT_EQ(A.GetBalance(), 5);
}

