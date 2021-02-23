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

int fibo (int n) {
    int f[n + 2];
    f[0] = 0;
    f[1] = 1;

    for  (int  x = 2; x <= n; x++) {
        f[x] = f[x - 1] + f[x - 2];
    }
    return f[n];
}

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
   // ***********************************************************

int num;

cout << "Enter a number: ";
cin >> num;

cout << "The " << num << "th number in Fibonacci sequence is " << fibo(num) << "." << endl;
cout << endl;
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************

system("PAUSE");
return EXIT_SUCCESS;
}