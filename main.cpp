#include <iostream>
#include "Person.h"
#include "Thing.h"
#include "GPS.h"
#include "Record.h"
#include "Time.h"
#include "Record.h"

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

    cout << firstRecord.getPerson().getName() << endl;
    cout << firstRecord.getInteract().getName() << endl;
    cout << firstRecord.getThing1().getObj() << endl;
    cout << firstRecord.getThing2().getObj() << endl;
    cout << firstRecord.getGPS().getLocation() << endl;
    cout << firstRecord.getTime().getTime() << endl;

    cout << secondRecord.getPerson().getName() << endl;
    cout << secondRecord.getInteract().getName() << endl;
    cout << secondRecord.getThing1().getObj() << endl;
    cout << secondRecord.getThing2().getObj() << endl;
    cout << secondRecord.getGPS().getLocation() << endl;
    cout << secondRecord.getTime().getTime() << endl;

    cout << thirdRecord.getPerson().getName() << endl;
    cout << thirdRecord.getInteract().getName() << endl;
    cout << thirdRecord.getThing1().getObj() << endl;
    cout << thirdRecord.getThing2().getObj() << endl;
    cout << thirdRecord.getGPS().getLocation() << endl;
    cout << thirdRecord.getTime().getTime() << endl;

    cout << fourthRecord.getPerson().getName() << endl;
    cout << fourthRecord.getInteract().getName() << endl;
    cout << fourthRecord.getThing1().getObj() << endl;
    cout << fourthRecord.getThing2().getObj() << endl;
    cout << fourthRecord.getGPS().getLocation() << endl;
    cout << fourthRecord.getTime().getTime() << endl;

    return 0;
}