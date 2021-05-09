#include "../Account.cpp"
//#include <Transaction.h>

#include "gtest/gtest.h"

TEST(Print, TestSuperTest)
{
	Account A(3, 2);
	ASSERT_EQ(A.GetBalance(), 5);
}

