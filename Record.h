#include <string>
#include <Person.h>
#include <Thing.h>
#include <GPS.h>
#include <Record.h>
#include <Time.h>
using namespace std;

class Record {
private:

    Person objPerson;
    Person interactPerson;
    Thing objThing;
    Time objTime;
    GPS objGPS;

public:
  
    Record();

    Record(Person p1, Person p2, Thing thisThing, Time thisTime, GPS thisLocation);

    void setPerson(Person personX);

    Person getPersons();

    void setInteract(Person personX);

    Person getInteract();

    void setThing(Thing thingX);

    Thing getThings();

    void setTime(Time timeX);
    
    Time getTime();

    void setGPS(GPS gpsX);

    GPS getGPS();
};