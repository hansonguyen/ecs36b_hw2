#include <string>
#include "Time.h"
#include "everything.h"
using namespace std;

Time::Time(string n) {this->time = n;}

Time::Time() {this->time = "";}

void Time::setTime(string n) {this->time = n;}

string Time::getTime() {return this->time;}

Json::Value
Time:: dump2JSON
() {
    Json::Value result {};
    result["time"] = this->time;
    return result;
}