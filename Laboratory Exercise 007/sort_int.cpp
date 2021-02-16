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
int n[6];

    for (int i = 0; i < 6; i++) {
        cout << "Enter a number[" << i + 1 << "]: ";
        cin >> n[i];
        
    }

    for (int i = 0; i < 6; i++){
        for (int a = i; a < 6; a++){
            if (n[i] > n[a]){
                int temp = n[i];
                n[i] = n[a];
                n[a] = temp;
            }
        }
    }

cout << endl;
cout << "The entered numbers are: " << n[0] << ", "  << n[1] << ", " << n[2] << ", " << n[3] << ", " <<  n[4] << " and " << n[5] << "."; 
cout << endl;
    
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************

system("PAUSE");
return EXIT_SUCCESS;
}