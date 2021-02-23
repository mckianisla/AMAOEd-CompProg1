#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "person.h"

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
    
Person details("Mc Kian Isla","San Pedro, Laguna","Male",32,"Junior Programmer");

cout << details.getPerson() << endl;
cout << endl;    

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
  
system("PAUSE");
return EXIT_SUCCESS;
}