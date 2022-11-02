#include <iostream>
#include "Person.h"
#include "Thing.h"
#include "GPS.h"
#include "Record.h"
#include "Time.h"
#include "Record.h"
#include "everything.h"

using namespace std;

int main(int argc, char *argv[]) {

    // Record 1 - Little Red Riding Hood wore the cap
    Person LLRH = Person("Little Red Riding Hood");
    Thing cap = Thing("Cap");
    Time morning = Time("Morning");
    GPS home = GPS("Home");
    Record firstRecord = Record();
    firstRecord.setPerson(LLRH);
    firstRecord.setThing1(cap);
    firstRecord.setTime(morning);

    // Record 2 - Her (Little Red Riding Hood) mom gave her the cake and wine
    Person mom = Person("Mom");
    Thing cake = Thing("Cake");
    Thing wine = Thing("Wine");
    Time afternoon = Time("Afternoon");
    Record secondRecord = Record();
    secondRecord.setPerson(mom);
    secondRecord.setInteract(LLRH);
    secondRecord.setThing1(cake);
    secondRecord.setThing2(wine);
    secondRecord.setTime(afternoon);

    // Record 3 - Little Red met the wolf at a particular spot in the woods
    Person wolf = Person("Wolf");
    GPS woods = GPS("Woods");
    Record thirdRecord = Record();
    thirdRecord.setPerson(wolf);
    thirdRecord.setInteract(LLRH);
    thirdRecord.setGPS(woods);
    thirdRecord.setTime(afternoon);

    // Record 4 - Grandma was at her own home right outside of the wood and there were three large oak trees nearby
    Person grandma = Person("Grandma");
    Thing trees = Thing("Three Oak Trees");
    Time evening = Time("Evening");
    Record fourthRecord = Record();
    fourthRecord.setPerson(grandma);
    fourthRecord.setGPS(home);
    fourthRecord.setThing1(trees);
    fourthRecord.setTime(evening);

    Json::Value firstRecordJSON = firstRecord.dump2JSON();
    Json::Value secondRecordJSON = secondRecord.dump2JSON();
    Json::Value thirdRecordJSON = thirdRecord.dump2JSON();
    Json::Value fourthRecordJSON = fourthRecord.dump2JSON();
    cout << "Record 1:" << endl;
    cout << firstRecordJSON.toStyledString() << endl;
    cout << "Record 2:" << endl;
    cout << secondRecordJSON.toStyledString() << endl;
    cout << "Record 3:" << endl;
    cout << thirdRecordJSON.toStyledString() << endl;
    cout << "Record 4:" << endl;
    cout << fourthRecordJSON.toStyledString() << endl;

    return 0;
}