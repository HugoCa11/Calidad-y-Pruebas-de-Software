#include"gtest/gtest.h"
#include"Almacen.h"

class AlmacenFixture : public ::testing::Test{
public:
    void SetUp(){
        
    }
    void TearDown(){
        
    }
    static void SetUPTestCase(){
        a = new Almacen<int>(4);
    }
    static void TearDownTestCase(){
        delete a;
    }
    
    static Almacen<int> *a;
    
};

Almacen<int>* AlmacenFixture::a = 0;

TEST_F(AlmacenFixture, Constructor){
    a->size();
}