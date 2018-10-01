//#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include <sstream>
#include <iostream>
#include "my_prev.h"
#include "my_symbol.h"

TEST_CASE( "test my int wrapper class" ) {
    
    MyPrevWrapper<int> var;
    int ival;
    var = 7;
    ival = var;
    std::cout << var << "=" << ival << std::endl;

    REQUIRE( var == ival);
    
}

TEST_CASE( "test my float wrapper class" ) {
    
    MyPrevWrapper<float> var;
    float fval;
    var = 3.14;
    fval = var;
    std::cout << var << "=" << fval << std::endl;

    REQUIRE( var == fval);
    
}

TEST_CASE( "test my meta wrapper" ) {
    
    MySymbolWrapper<float,std::string> var(3.14159,"Pi");
    float fval = var;
    std::cout << var.getMeta()<< " "  << var << "=" << fval << std::endl;

    REQUIRE( var == fval);
    
}
