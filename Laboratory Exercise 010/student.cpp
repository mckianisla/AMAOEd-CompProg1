#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "student.h"

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
Student student;
string mProgram, mYear, mUniversity;

cout << "Academic Program : ";
getline (cin, mProgram);
student.setProgram(mProgram);

cout << "Year\t\t : ";
getline (cin, mYear);
student.setYear(mYear);

cout << "University\t : ";
getline (cin, mUniversity);
student.setUniversity(mUniversity);

cout << details.getPerson() << endl;
cout << "His taking up " << student.getProgram() << "." << endl;
cout << "He is currently a " << student.getYear() << " year student at " << student.getUniversity() << "." << endl;

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
  
system("PAUSE");
return EXIT_SUCCESS;
}