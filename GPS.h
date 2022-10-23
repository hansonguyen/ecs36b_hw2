#include <string>
using namespace std;

class GPS {
    private:   
        string location;

    public:
        GPS(string n);

        GPS();

        void setLocation(string n);

        string getLocation();
};