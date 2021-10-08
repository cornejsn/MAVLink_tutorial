#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
#include "main.cpp"

using namespace std;

// Running two tests to ensure that drone data is properly marshalled
TEST_CASE( "Check flight data", "[data]" ) {
    SECTION("checking first flight data") {
        FlightData data = createDataStruct("sample.xml");

        REQUIRE( data.latitude == "40.5108");
        REQUIRE( data.longitude == "-76.4630");
        REQUIRE( data.temperature == "56.8");
    }
    SECTION("checking second flight data") {
        FlightData data = createDataStruct("sample2.xml");

        REQUIRE( data.latitude == "39.1816");
        REQUIRE( data.longitude == "-74.0872");
        REQUIRE( data.temperature == "44.3");
    }
    SECTION("calculating differences between two flights") {
        FlightData data1 = createDataStruct("sample.xml");
        FlightData data2 = createDataStruct("sample2.xml");

        REQUIRE( (stod(data1.latitude) - stod(data2.latitude)) == 1.3292);
        REQUIRE( (stod(data1.longitude) - stod(data2.longitude)) == 2.3758);
        REQUIRE( (stod(data1.temperature) - stod(data2.temperature)) == 12.5);

    }
}
