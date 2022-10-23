#include <string>
#include <Record.h>
using namespace std;

Record::Record() {
	this->objPerson = NULL;
	this->interactPerson = NULL;
	this->objThing = NULL;
	this->objTime = NULL;
	this->objGPS = NULL;
}

Record::Record(Person p1, Person p2, Thing thisThing, Time thisTime, GPS thisLocation) {
	this->objPerson = p1;
	this->interactPerson = p2;
	this->objThing = thisThing;
	this->objTime = thisTime;
	this->objGPS = thisLocation;
}

void Record::setPerson(Person personX) {
	this->objPerson = personX;
}

Person Record::getPerson() {
	return this->objPerson;
}

void Record::setInteract(Person personX) {
	this->interactPerson = personX;
}

Person Record::getInteract() {
	return interactPerson;
}

void Record::setThing(Thing thingX) {
	this->objThing = thingX;
}

Thing Record::getThing() {
	return objThing;

}

void Record::setTime(Time timeX) {

	this->objTime = timeX
}

Time Record::getTime() {
	
	return objTime;
}

void Record::setGPS(GPS gpsX) {

	this->objGPS = gpsX
}

GPS Record::getGPS() {

	return objGPS;
}