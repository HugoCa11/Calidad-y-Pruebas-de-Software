#include"gtest/gtest.h"
#include"functions.h"

class FixValParam : public testing::TestWithParam<int>{
public:
    void setUp(){}
    void tearDown(){}
};

TEST_P(FixValParam, Pares){
    if(GetParam() % 2 == 0){
        EXPECT_EQ(true, isEven(GetParam()));
    }
    else{
         EXPECT_EQ(false, isEven(GetParam()));
    }
}

TEST_P(FixValParam, Impares){
    if(GetParam() % 2 != 0){
        EXPECT_EQ(true, isOdd(GetParam()));
    }
    else{
         EXPECT_EQ(false, isOdd(GetParam()));
    }
}

INSTANTIATE_TEST_CASE_P(UsingValues, FixValParam, testing::Values(2, 4, 6, 8, 11, 13, 15, 17));