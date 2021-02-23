#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "dog.h"

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
    
LeggedMammal details(4, "Thick", "with tail");
Dog dog;
string mBreed, mSize, mStatus;

cout << "Breed\t\t : ";
getline (cin, mBreed);
dog.setBreed(mBreed);

cout << "Size\t\t : ";
getline (cin, mSize);
dog.setSize(mSize);

cout << "Status\t\t : ";
getline (cin, mStatus);
dog.setStatus(mStatus);

cout << details.getLeggedMammal()<<  endl;
cout << "The dog breed is " << dog.getBreed() << "." << endl;
cout << "It is " << dog.getSize() << " in size and its status is " << dog.getStatus() << "." << endl;
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
  
system("PAUSE");
return EXIT_SUCCESS;
}