#include <string>
#include <sstream>
#include "mammal.h"

using namespace std;

class Dog : public LeggedMammal {
   
    public:
    string mBreed, mSize, mStatus;
       
        Dog() : LeggedMammal(4, "thick", "with tail") { }
        string getLeggedMammal() {
            return LeggedMammal::getLeggedMammal();
        }
        string getBreed() {
            return mBreed;
        }
        
        void setBreed(string a) {
            mBreed = a;
        }
        string getSize() {
            return mSize;
        }
        
        void setSize(string b) {
            mSize = b;
        }
        string getStatus() {
            return mStatus;
        }
        
        void setStatus(string c) {
            mStatus = c;
        }

};