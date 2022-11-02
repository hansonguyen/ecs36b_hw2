#ifndef THING_H
#define THING_H
#include <string>
#include "everything.h"
using namespace std;

class Thing {
    private:   
        string obj;

    public:
        Thing(string n);

        Thing();

        void setObj(string n);

        string getObj();

        Json::Value dump2JSON();
};
#endif