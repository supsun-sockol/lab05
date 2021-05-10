#include "../Account.cpp"
#include "../Transaction.cpp"

#include "gtest/gtest.h"

TEST(Account, test1)
{
	Account A(1, 5);
	EXPECT_EQ(A.GetBalance(), 5);
}
TEST(Account, test2)
{
	Account A(1, 5);
	A.Lock();
	A.ChangeBalance(3);
	EXPECT_EQ(A.GetBalance(), 8);
}
TEST(Account, test3)
{
	Account A(1, 5);
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
	EXPECT_ANY_THROW(A.ChangeBalance(3));
}
TEST(Transaction, test1)
{
	Transaction B;
	EXPECT_EQ(B.fee(), 1);
}
TEST(Transaction, test2)
{
	Transaction B;
	B.set_fee(5);
	EXPECT_EQ(B.fee(), 5);
}
TEST(Transaction, test3)
{
	Transaction B;
	Account A1(1, 5);
	Account A2(2, 2);
	B.Make(A1, A2, 2);
	EXPECT_EQ(A1.GetBalance(), 2);
	EXPECT_EQ(A2.GetBalance(), 4);
}
int main(){
	return RUN_ALL_TESTS();
}
