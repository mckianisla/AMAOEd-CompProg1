#include <string>
#include <sstream>

using namespace std;

class Polygon {

    public:
        string mName, mColor;
        int mSides;
        

    Polygon(string name, int sides, string color) {
       mName = name;
       mSides = sides;
       mColor = color;
    }

        string getPolygon() {
            ostringstream s;
            s << mName << ". It has " << mSides << " sides and its color is " << mColor <<" ." << endl;
            return s.str();
        }

};