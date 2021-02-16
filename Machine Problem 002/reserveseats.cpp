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

int totalseats[5][7];
int s = 1;
int seatnumber;

    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 7; c++) {
            totalseats[r][c] = s++;
        }
    }

do
{

    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 7; c++) {
            cout << totalseats[r][c] << "\t";
        }
        cout << endl;
    }

cout << "\nEnter seat number to reserve: ";
cin >> seatnumber;

if (seatnumber >= 1 && seatnumber <=35) {
int x = 1;
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            if (totalseats[r][c] == seatnumber) {
                totalseats[r][c] = 0;
                cout << "Seat successfully reserved." << endl;
                cout << endl;
                x = 0;
            }
        }
    }

    if (x == 1) {
        cout << "Seat is taken." << endl;
        cout << endl;
    }
}
    else {
        cout << "Invalid seat number." << endl;
        cout << endl;
    }


} while (true);
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************

system("PAUSE");
return EXIT_SUCCESS;
}