#ifndef TIME_H
#define TIME_H
#include <string>
#include "everything.h"
using namespace std;

class Time {
    private:   
        string time;

    public:
        Time(string n);

        Time();

        void setTime(string n);

        string getTime();

        Json::Value dump2JSON();
};
#endif