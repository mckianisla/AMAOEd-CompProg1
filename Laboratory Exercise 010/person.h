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
            s << "Name\t\t : " << mName << endl;
            s << "Address\t\t : " << mAddress << endl;
            s << "Gender\t\t : " << mGender << endl;
            s << "Age\t\t : " << mAge << endl;
            s << "Occupation\t : " << mOccupation << endl;
            return s.str();
        }

};