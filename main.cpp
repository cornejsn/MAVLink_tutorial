#include <iostream>
#include "tinyxml2.h"
#include "tinyxml2.cpp"

using namespace std;

struct Contact {
    string name;
    string email;
    string phone;
};

Contact createContact (const char* path) {
    tinyxml2::XMLDocument doc;
    doc.LoadFile(path);
    
    Contact contact;
    
    contact.name = doc.FirstChildElement("contact")->FirstChildElement("name")->GetText();
    contact.email = doc.FirstChildElement("contact")->FirstChildElement("email")->GetText();
    contact.phone = doc.FirstChildElement("contact")->FirstChildElement("phone")->GetText();

    return contact;
}