#include <string>
using namespace std;

class Person {
    private:   
        string name;

    public:
        Person(string n);

        Person();

        void setName(string n);

        string getName();
};