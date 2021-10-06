#include <iostream>
#include "src\pugixml.hpp"
#include "src\pugixml.cpp"

using namespace std;

template <class XMLParser>
XMLParser ParseXML (XMLParser xml) {
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(xml);

    cout << "Load result: " << result.description() << ", mesh name: " << doc.child("mesh").attribute("name").value() << endl;
    return 0;
}

int main() {
    const char* xml_path = "docs/samples/tree.xml";
    ParseXML(xml_path);

    return 0;
}