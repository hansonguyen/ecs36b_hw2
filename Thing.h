#include <everything.h>
#include <string>
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