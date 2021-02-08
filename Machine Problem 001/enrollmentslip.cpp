#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

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
    
string studentName, course, yearName;
int yearLvl, rate;
float totalunits, tuitionfee, downpayment, balance;

cout << "Student Name\t : ";
getline (cin, studentName);
cout << "Program/Course\t : ";
getline (cin, course);
cout << "Year Level\t : ";
cin >> yearLvl;
cout << "No. of Units\t : ";
cin >> totalunits;
cout << "----------------------------------------------------------------" << endl;
cout << endl;

    if (yearLvl == 1){
        yearName = "Freshman";
        rate = 1500;
    } else if (yearLvl == 2){
        yearName = "Sophomore";
        rate = 1800;
    } else if (yearLvl == 3){
        yearName = "Junior";
        rate = 2000;
    } else {
        yearName = "Senior";
        rate = 2300;
    }

tuitionfee = totalunits * rate;
downpayment = 0.3 * tuitionfee;
balance = tuitionfee - downpayment;

cout << "\tENROLLMENT SLIP\t" << endl;
cout << "Student Name\t : " << studentName << endl;
cout << "Program/Course\t : " << course << endl;
cout << "Year Name\t : " << yearName << endl;
cout << "No. of Units\t : " << totalunits << endl;
cout << "Tuition Fee\t : " << tuitionfee << endl;
cout << "Down Payment\t : " << downpayment << endl;
cout << "Balance \t : " << balance <<endl;
    
cout <<endl;
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
system("PAUSE");
return EXIT_SUCCESS;
}