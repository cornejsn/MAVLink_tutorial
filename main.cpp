#include <iostream>
#include "tinyxml2.h"
// #include "src\pugixml.hpp"
// #include "src\pugixml.cpp"

using namespace std;

// template <class XMLParser>
// XMLParser ParseXML (XMLParser xml) {
//     pugi::xml_document doc;
//     pugi::xml_parse_result result = doc.load_file(xml);

//     cout << "Load result: " << result.description() << ", mesh name: " << doc.child("mesh").attribute("name").value() << endl;
//     return 0;
// }

int main() {
    // const char* xml_path = "docs/samples/tree.xml";
    // ParseXML(xml_path);

    tinyxml2::XMLDocument doc;
    doc.LoadFile("docs/samples/tree.xml");
    
    // tinyxml2::XMLText* textNode = doc.FirstChildElement("xml")->FirstChildElement("mesh")->FirstChild()->ToText();
    // const char* title = textNode->Value();
    cout << doc << endl;

    return 0;
}