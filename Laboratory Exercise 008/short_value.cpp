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

void digit(short number) {
    short x = number / 10;
    short y = number % 10;


    if (number > 9 && number < 100) {
        cout << x << " " << y;
    } else {
        cout << endl;
    }
}

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
   // ***********************************************************

short n;

    cout << "Enter number from 10 to 99: ";
    cin >> n;

    digit(n);
    cout << endl;
    cout << endl;
    
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************

system("PAUSE");
return EXIT_SUCCESS;
}