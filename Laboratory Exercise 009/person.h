#include <string>
#include <sstream>

using namespace std;

class Person {

    public:
        string mName, mAddress, mGender, mOccupation;
        int mAge;  

    Person(string name, string address, string gender, int age, string occupation) {
       mName = name;
       mAddress = address;
       mGender = gender;
       mAge = age;
       mOccupation = occupation;
    }

        string getPerson() {
            ostringstream s;
            s << "Name          : " << mName << endl;
            s << "Address       : " << mAddress << endl;
            s << "Gender        : " << mGender << endl;
            s << "Age           : " << mAge << endl;
            s << "Occupation    : " << mOccupation << endl;
            return s.str();
        }

};