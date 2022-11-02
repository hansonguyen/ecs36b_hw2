#include <string>
#include "Time.h"
using namespace std;

Time::Time(string n) {this->order = n;}

Time::Time() {this->order = "";}

void Time::setTime(string n) {this->order = n;}

string Time::getTime() {return this->order;}