#include "headerToBeTested.h"
#include <gtest/gtest.h>
#include <iostream>

class MyClass {
	std::string id;
public:
	MyClass(std::string _id) : id(_id) {}
	std::string getId() { return id; }
};


TEST( TestName, Subtest_0) {

	MyClass sample = MyClass("Jack");
	
	ASSERT_TRUE(1 == 1);
	ASSERT_FALSE(1 == 2);
	EXPECT_EQ("Jack", sample.getId());
	std::cout << "This will only be printed if ALL the asserts above it pass" << std::endl;

}




TEST( TestName, Subtest_1) {
	
	ASSERT_TRUE(1 == 1);
	ASSERT_FALSE(1 == 2);


}

TEST( TestName, Subtest_2) {

	ASSERT_TRUE(2==2);

}

int main(int argc, char** argv)
{	

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();

};
