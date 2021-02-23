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

int divide(int x, int y) {
    return x/y;
}

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
   // ***********************************************************
int  n[6];

for (int i = 0; i < 6; i++) {
    cout << "Enter a number[" << i + 1 << "]: ";
    cin >> n[i];
    
}

cout << endl;
cout << "1. The quotient of "  << n[0] << "/" << n[1] << " is " << divide(n[0], n[1]) << endl;

cout << endl;
cout << "2. The quotient of "  << n[2] << "/" << n[3] << " is " << divide(n[2], n[3]) << endl;

cout << endl;
cout << "3. The quotient of "  << n[4] << "/" << n[5] << " is " << divide(n[4], n[5]) << endl;

cout << endl;
    
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************

system("PAUSE");
return EXIT_SUCCESS;
}