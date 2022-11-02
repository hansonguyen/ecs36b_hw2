#ifndef RECORD_H
#define RECORD_H
#include <string>
#include "Person.h"
#include "Thing.h"
#include "GPS.h"
#include "Time.h"
using namespace std;

class Record {
private:
    Person objPerson;
    Person interactPerson;
    Thing objThing1;
    Thing objThing2;
    Time objTime;
    GPS objGPS;

public:
    Record(Person p1, Person p2, Thing t1, Thing t2, Time thisTime, GPS thisLocation);

    Record();

    void setPerson(Person personX);

    Person getPerson();

    void setInteract(Person personX);

    Person getInteract();

    void setThing1(Thing thingX);

    Thing getThing1();

    void setThing2(Thing thingX);

    Thing getThing2();

    void setTime(Time timeX);
    
    Time getTime();

    void setGPS(GPS gpsX);

    GPS getGPS();
};
#endif