#ifndef GPS_H
#define GPS_H
#include <string>
#include "everything.h"
using namespace std;

class GPS {
    private:   
        string location;

    public:
        GPS(string n);

        GPS();

        void setLocation(string n);

        string getLocation();

        Json::Value dump2JSON();
};
#endif