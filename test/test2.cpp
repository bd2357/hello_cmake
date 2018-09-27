//#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include <sstream>
#include <iostream>
#include "hello.h"

TEST_CASE( "do more hello tests" ) {
    std::ostringstream out;
    std::streambuf* coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(out.rdbuf()); //redirect cout to out

    SECTION( "add one string" ) {
    hello("there");
    std::cout.rdbuf(coutbuf);
    REQUIRE( out.str() == "Hello, there!\n");
    }

    SECTION( "add two differnt strings" ) {
    hello("Bob");
    hello("Terry");
    
    std::cout.rdbuf(coutbuf);
    REQUIRE( out.str() == "Hello, Bob!\nHello, Terry!\n");

    }

}
