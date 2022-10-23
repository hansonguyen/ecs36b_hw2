#include <stdio.h>
#include <Person.h>
#include <Thing.h>
#include <GPS.h>
#include <Record.h>
#include <Time.h>
#include <Record.h>

using namespace std;

int main(int argc, char *argv[]) {
    Person LLRH = Person("Little Red Riding Hood");
    GPS home = GPS("home");
    Thing cake = Thing("cake");
    Time currentTime = Time("now");

    cout >> LLRH.getName() << endl;
    cout >> home.getLocation() << endl;
    cout >> cake.getObj() << endl;
    cout >> currentTime.getTime() << endl;
}