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
  float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num2 == 0) {
        if (num1 == 0) {
            cout << "Zero divided by zero is undefined. Because it's in the indeterminate form. " <<endl;         
        } else {
            cout << "Any number divided by zero is undefined. " <<endl;
            }
        } else {
            cout << "The Quotient of the two numbers is " << num1/num2 << "." <<endl;
      }
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************

cout << endl;
system("PAUSE");
return EXIT_SUCCESS;
}
