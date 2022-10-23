#include <string>
#include <Person.h>
using namespace std;

Person::Person(string n) {
    this->name = n;
}

Person::Person() {
    this->name = "";
}

void Person::setName(string n) {this->name = n;}

string Person::getName() {return this->name;}

Json::Value
Person::dump2JSON
(void) {
    Json::Value result { };

    if (this->name != "")
        {
        result["name"] = this->name;
        }

    return result;
}