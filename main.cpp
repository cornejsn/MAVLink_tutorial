#include <iostream>
#include "tinyxml2.h"
#include "tinyxml2.cpp"

using namespace std;

// Structure that holds marshalled flight data
struct FlightData {
    string latitude;
    string longitude;
    string temperature;
};

// Function that takes in an XML path and marshalls that data into a C++ Struct
FlightData createDataStruct (const char* path) {

    // Parses XML data
    tinyxml2::XMLDocument doc;
    doc.LoadFile(path);

    // Marshalling parsed data from XML into struct
    FlightData data;
    
    data.latitude = doc.FirstChildElement("data")->FirstChildElement("latitude")->GetText();
    data.longitude = doc.FirstChildElement("data")->FirstChildElement("longitude")->GetText();
    data.temperature = doc.FirstChildElement("data")->FirstChildElement("temp")->GetText();

    return data;
}