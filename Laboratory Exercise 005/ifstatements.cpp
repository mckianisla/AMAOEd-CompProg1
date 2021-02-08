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
  int num;

    cout << "Enter an integer: ";
    cin >> num;
    
    if (num == 0) {
        cout << "Hello World" << endl; } 
    else if (num == 1) {
        cout << "I am Groot" << endl; }
    else if (num == 2) {
        cout << "To the Top" << endl; }
    else if (num == 3) {
        cout << "Where is the horizon" << endl; }
    else if (num == 4) {
        cout << "I do not know" << endl; }
    else {
        cout << "Yeah, I will." << endl; }    

// ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************

cout << endl;
system("PAUSE");
return EXIT_SUCCESS;
}
