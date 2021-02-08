#include <cstdio>
#include <cstdlib>
#include <iostream>

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
int h;

cout << "Enter height for the triangle: ";
cin >> h;

for (int x = 0; x < h; x++) {
    for (int a = x; a < h - 1; a++) {
        cout << " ";
    }
    for (int y = 0; y < x; y++) {
        cout << "*";
    }
    cout << endl;
}
    
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
cout << endl;
system("PAUSE");
return EXIT_SUCCESS;
}