/*
    Name: Axel Lopez
    Date: 01-02-25
    Description: Keep up with my skincare products and information about them as well as my routine.
    File: skincare.cpp
*/
//includes
#include <iostream>

//namespaces
using namespace std;

//main 
int main ()
{
    // Variable declaration
    int choice;

    // Title display plus menu
    cout << "Skincare app" << endl;

    // Program will keep running until the user chooses to end the program
    do
    {
        cout << "What would you like to do?" << endl;
        cout << "1. Enter in a new product" << endl;
        cout << "2. Review a product" << endl;
        cout << "3. View current Skincare routing" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your selection: ";
        cin >> choice;

        // Input validation
        while(choice < 1 || choice > 4)
        {
            cout << "Invalid Input" << endl;
            cout << "Enter a number 1-4 from the menu: " << endl;
            cin >> choice;
        }

        // Do the selected action based on user input
        switch(choice)
        {
            case 1:
                cout << "choice 1";

                break;
            
            case 2:
                cout << "choice 2";

                break;

            case 3:
                cout << "choice 3";

                break;

            case 4:
                cout << "Goodbye";

                break;
        }
    }while(choice != 4);

    return 0;
}