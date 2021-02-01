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

  char section[50];

    cout << "Enter Section: ";
    cin.getline(section, 50);
    cout << "*** Section: " << section << " ***" << endl;

cout << endl;
// ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
system("PAUSE");
return EXIT_SUCCESS;
}
