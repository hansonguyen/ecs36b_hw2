#include <string>
#include "GPS.h"
using namespace std;

GPS::GPS(string n) {this->location = n;}

GPS::GPS() {this->location = "";}

void GPS::setLocation(string n) {this->location = n;}

string GPS::getLocation() {return this->location;}