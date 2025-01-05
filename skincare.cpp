/*
    Name: Axel Lopez
    Date: 01-02-25
    Description: Keep up with my skincare products and information about them as well as my routine.
    File: skincare.cpp
*/
//includes
#include <iostream>
#include <string>
#include "linkedList.h"

//namespaces
using namespace std;

//struct that has data that will be stored about a product
struct Product
{
    string brand, type, use, store;
    float price;
};

//function to insert a new product
void newProduct()
{
    // // using the struct to collect the information about the new product
    // Product p;

    // cout << "Enter the details for this new product:" << endl;

    // cout << "What is the brand of the new product: ";
    // cin.ignore();
    // getline(cin, p.brand);

    // cout << "What type of product is this (cleanser, toner, serum, cream): ";
    // cin.ignore();
    // getline(cin, p.type);

    // cout << "What is the use of this product: ";
    // cin.ignore();
    // getline(cin, p.use);

    // cout << "Where can you buy this product: ";
    // cin.ignore();
    // getline(cin, p.store);

    // cout << "How much does this product cost: ";
    // cin >> p.price;
}

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
        cout << "2. View all products" << endl;
        cout << "3. Review a product" << endl;
        cout << "4. View current Skincare routing" << endl;
        cout << "5. Exit" << endl;
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
                newProduct();

                
                linkedList *list = new linkedList();
                list->addProduct();
                


                break;
            
            case 2:
                cout << "choice 2";

                break;

            case 3:
                cout << "choice 3";

                break;

            case 4:
                cout << "Goodbye" << endl;

                break;
        }
    }while(choice != 4);

    return 0;
}