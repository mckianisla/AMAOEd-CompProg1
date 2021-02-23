#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "polygon.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
   // ***********************************************************
    
Polygon details("nonagon", 9, "orange");

cout << "The polygon is a " << details.getPolygon() << endl;
cout << endl;   

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
  
system("PAUSE");
return EXIT_SUCCESS;
}
