#define CONFIG_CATCH_MAIN
#include <iostream>
#include "catch.hpp"
#include "src\pugixml.hpp"
#include "src\pugixml.cpp"

using namespace std;

string ParseXML (const char* xml) {
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(xml);

    //cout << "Load result: " << result.description() << ", mesh name: " << doc.child("mesh").attribute("name").value() << endl;
    return doc.child("mesh").attribute("name").value();
}

TEST_CASE( "XML Parser is being tested", "[xml]" ) {
    const char* xml_path = "docs/samples/tree.xml";

    SECTION( "Checking name of first child node" ) {
        REQUIRE( ParseXML(xml_path) == "mesh root" );
    }
}