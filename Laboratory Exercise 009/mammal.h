#include <string>
#include <sstream>

using namespace std;

class LeggedMammal {

    public:
        int mLegs;
        string mFur, mTail;

    LeggedMammal(int legs, string fur, string tail) {
        mLegs = legs;
        mFur = fur;
        mTail = tail;
    }

        string getLeggedMammal() {
            ostringstream s;
            s << "Legs              : " << mLegs << endl;
            s << "Kind of Fur       : " << mFur << endl;
            s << "Presence of Tail  : " << mTail << endl;
            return s.str();
        }

};