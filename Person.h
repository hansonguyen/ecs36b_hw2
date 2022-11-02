#ifndef PERSON_H
#define PERSON_H
#include <string>
#include "everything.h"
using namespace std;

class Person {
    private:   
        string name;

    public:

        Person(string n);

        Person();

        void setName(string n);

        string getName();

        Json::Value dump2JSON();
};
#endif