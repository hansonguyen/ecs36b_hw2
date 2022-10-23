#include <string>
#include <Thing.h>
using namespace std;

Thing::Thing(string n) {this->obj = n;}

Thing::Thing() {this->obj = "";}

void Thing::setObj(string n) {this->obj = n;}

string Thing::getObj() {return this->obj;}