//#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "my_meta.h"


TEST_CASE( "test my meta wrapper" ) {
    
    MyMetaWrapper<float,std::string> var(3.14159,"Pi");
    float fval = var;

    REQUIRE( var == fval);
    REQUIRE( var.getMeta() == "Pi");
    
}

TEST_CASE( "test the meta wrapper macro" ) {

    MetaWrapper(int, myVar, 42);

    REQUIRE( myVar == 42 );
    REQUIRE( myVar.getMeta() == "myVar" );

}

int funcWithIntParam(int val)
{
    return val;
}

int funcWithPairParam(std::pair<int, const std::string> val)
{
    REQUIRE(val.second == "bar");
    return val.first;

}


SCENARIO( "An integer that can carry its own name", "[my_meta]"   ) {
    GIVEN ("An integer variable with name foo and initial value 42") {
	MetaWrapper(int, foo, 42);

	REQUIRE(foo == 42);
	REQUIRE(foo.getMeta() == "foo");

	WHEN("the value is inceased"  )
	{
	    foo = foo + 2;

	    THEN ("The value increases but not the meta data") {
	        REQUIRE(foo == 44);
                REQUIRE(foo.getMeta() == "foo");
	    }
	}

	WHEN("the value is decresed")
	{
	    foo = foo - 20;


	    THEN ("The value decreses but not the meta data") {
	        REQUIRE(foo == 22);
	        REQUIRE(foo.getMeta() == "foo");
	    }
	}

	WHEN("the object is used in place of an interger it is cast correctly")
	{
	    int ret = funcWithIntParam(foo);
	    REQUIRE(ret == 42);

	}

	WHEN("the object is used in place of a pair it is cast correctly")
	{
	    int ret = funcWithPairParam(foo);
	    REQUIRE(ret == 42);
	}
    }

}


