#include <string>
#include "Record.h"
using namespace std;

Record::Record(Person p1, Person p2, Thing t1, Thing t2, Time thisTime, GPS thisLocation) {
	this->objPerson = p1;
	this->interactPerson = p2;
	this->objThing1 = t1;
	this->objThing2 = t2;
	this->objTime = thisTime;
	this->objGPS = thisLocation;
}

Record::Record() {}

void Record::setPerson(Person personX) {this->objPerson = personX;}

Person Record::getPerson() {return this->objPerson;}

void Record::setInteract(Person personX) {this->interactPerson = personX;}

Person Record::getInteract() {return interactPerson;}

void Record::setThing1(Thing thingX) {this->objThing1 = thingX;}

Thing Record::getThing1() {return objThing1;}

void Record::setThing2(Thing thingX) {this->objThing2 = thingX;}

Thing Record::getThing2() {return objThing2;}

void Record::setTime(Time timeX) {this->objTime = timeX;}

Time Record::getTime() {return objTime;}

void Record::setGPS(GPS gpsX) {this->objGPS = gpsX;}

GPS Record::getGPS() {return objGPS;}