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
    
   switch(num){
       case 0:
            cout << "Hello World" << endl;
            break;
        case 1:
            cout << "I am good" << endl;
            break;
        case 2:
            cout << "To the Top" <<endl;
            break;
        case 3:
            cout << "Where is the horizon" <<endl;
            break;
        case 4:
            cout << "I do not know" <<endl;
            break;
        default:
            cout <<"Yeah, I will." <<endl;
   }

// ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************

cout << endl;
system("PAUSE");
return EXIT_SUCCESS;
}
