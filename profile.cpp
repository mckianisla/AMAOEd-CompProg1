 #include <iostream>

using namespace std;
//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////
int main()
{
   // ************************** TO DO **************************
    // Place your code logic after this comment line
   // ***********************************************************

  string str1, str2, str3;

    cout << "Enter your name: ";
    getline (cin, str1);
    cout << "Enter password: ";
    getline (cin, str2);
    cout << "Enter your address: ";
    getline (cin, str3);
    cout << "Hi, I am  " << str1 << ". " << "I lived at " << str3 << "." << endl;

cout << endl;
// ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
system("PAUSE");
return EXIT_SUCCESS;
}
