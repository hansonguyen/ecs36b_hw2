#ifndef TIME_H
#define TIME_H
#include <string>
using namespace std;

class Time {
    private:   
        string order;

    public:
        Time(string n);

        Time();

        void setTime(string n);

        string getTime();
};
#endif