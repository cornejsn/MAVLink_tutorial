#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
#include "main.cpp"

using namespace std;

TEST_CASE( "Check newly made contacts for info", "[contact]" ) {
    SECTION("checking first contact") {
        Contact newContact = createContact("sample.xml");

        REQUIRE( newContact.name == "John Doe");
        REQUIRE( newContact.email == "j@doe.com");
        REQUIRE( newContact.phone == "555 12345");
    }
    SECTION("checking second contact") {
        Contact newContact = createContact("sample2.xml");

        REQUIRE( newContact.name == "Chris Johnson");
        REQUIRE( newContact.email == "c@johnson.com");
        REQUIRE( newContact.phone == "819 951 1561");
    }
    SECTION("checking third contact") {
        Contact newContact = createContact("sample3.xml");

        REQUIRE( newContact.name == "Jane Doe");
        REQUIRE( newContact.email == "ja@doe.com");
        REQUIRE( newContact.phone == "104 156 6805");
    }
    SECTION("checking fourth contact") {
        Contact newContact = createContact("sample4.xml");

        REQUIRE( newContact.name == "Mary Beth");
        REQUIRE( newContact.email == "m@beth.com");
        REQUIRE( newContact.phone == "165 615 6527");
    }
    SECTION("checking fifth contact") {
        Contact newContact = createContact("sample5.xml");

        REQUIRE( newContact.name == "Greg Thompson");
        REQUIRE( newContact.email == "g@thompson.com");
        REQUIRE( newContact.phone == "314 134 3145");
    }
}
