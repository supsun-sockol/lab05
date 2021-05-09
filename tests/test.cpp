#include "../Account.cpp"
//#include <Transaction.h>

#include "gtest/gtest.h"

TEST(Account, test1)
{
	Account A(1, 5);
	EXPECT_EQ(A.GetBalance(), 5);
}
TEST(Account, test2)
{
	Account A(1, 5);
	A.ChangeBalance(3);
	EXPECT_EQ(A.GetBalance(), 3);
}
TEST(Account, test3)
{
	Account A(1, 5);
	A.Lock();
	EXPECT_ANY_THROW(A.ChangeBalance(3));
}
TEST(Account, test4)
{
	Account A(1, 5);
	A.Lock();
	EXPECT_ANY_THROW(A.Lock());
}

TEST(Account, test5)
{
	Account A(1, 5);
	A.Lock();
	A.Unlock();
	EXPECT_NO_THROW(A.ChangeBalance(3));
}
int main(){
	return RUN_ALL_TESTS();
}
