#include <string>
#include <sstream>
#include "person.h"

using namespace std;

class Student : public Person {
   
    public:
    string mProgram, mYear, mUniversity;
       
        Student() : Person("Mc Kian Isla","San Pedro, Laguna","Male",32,"Junior Programmer") { }
        string getPerson() {
            return Person::getPerson();
        }
        string getProgram() {
            return mProgram;
        }
        
        void setProgram(string a) {
            mProgram = a;
        }
        string getYear() {
            return mYear;
        }
        
        void setYear(string b) {
            mYear = b;
        }
        string getUniversity() {
            return mUniversity;
        }
        
        void setUniversity(string c) {
            mUniversity = c;
        }

};