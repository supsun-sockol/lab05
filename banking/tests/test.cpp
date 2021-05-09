#include <Account.h>
//#include <Transaction.h>

#include <gtest/gtest.h>

int main(){
	TEST(Print, TestSuperTest)
	{
		Account A(3, 2);

	  EXPECT_EQ(A.GetBalance(), 2);
	}
};
