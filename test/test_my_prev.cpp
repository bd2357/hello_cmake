//#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "my_prev.h"

TEST_CASE( "test my int wrapper class" ) {
    
    MyPrevWrapper<int> var;
    MyPrevWrapper<int> var2(15);
    int ival;
    var = 7;
    ival = var;

    REQUIRE(var < var2);
    REQUIRE( var == ival);
    var = 9;
    REQUIRE( var.getPrev() == ival);
    var = var + 10;
    REQUIRE( var.getPrev() == 9);
    REQUIRE (var == 19);
    
}

TEST_CASE( "test my float wrapper class" ) {
    
    MyPrevWrapper<float> var;
    float fval;
    var = 3.14;
    fval = var;

    REQUIRE( var == fval);
    var = var + 5.0;
    REQUIRE( var == fval+5.0f);
    REQUIRE(var.getPrev() == fval);
    
}

