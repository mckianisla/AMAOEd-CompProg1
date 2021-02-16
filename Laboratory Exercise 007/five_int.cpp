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
int n[5];

for (int i = 0; i < 5; i++) {
    cout << "Enter a number[" << i + 1 << "]: ";
    cin >> n[i];
    
}

cout << endl;
cout << "The entered numbers are: " << n[0] << ", "  << n[1] << ", " << n[2] << ", " << n[3] << " and " <<  n[4] << "."; 
cout << endl;
    
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************

system("PAUSE");
return EXIT_SUCCESS;
}