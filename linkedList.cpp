/*
    Source file for linkedList.cpp
*/
#include "linkedList.h"

/*
    Constructor for the linkedList class
*/

linkedList::linkedList() {
    head = NULL;
    tail = NULL;
}

/*
    Destructor for the linkedList class
*/
linkedList::~linkedList() {
    node* temp = head;

    while (temp != NULL) {
        node* next = temp->next;
        delete temp;
        temp = next;
    }
}   

/*
    Function to add a new product to the linked list
*/
linkedList::Product linkedList::addProduct() {
    // using the struct to collect the information about the new product
    Product p;

    cout << "Enter the details for this new product:" << endl;

    cout << "What is the brand of the new product: ";
    cin.ignore();
    getline(cin, p.brand);

    cout << "What type of product is this (cleanser, toner, serum, cream): ";
    cin.ignore();
    getline(cin, p.type);

    cout << "What is the use of this product: ";
    cin.ignore();
    getline(cin, p.use);

    cout << "Where can you buy this product: ";
    cin.ignore();
    getline(cin, p.store);

    cout << "How much does this product cost: ";
    cin >> p.price;

    node* temp = new node;
    temp->data = p;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        tail = tail->next;
    }

    return p;
}

/*
    Function to print the linked list
*/
void linkedList::printList() {
    node* temp = head;

    while (temp != NULL) {
        cout << "Brand: " << temp->data.brand << endl;
        cout << "Type: " << temp->data.type << endl;
        cout << "Use: " << temp->data.use << endl;
        cout << "Store: " << temp->data.store << endl;
        cout << "Price: " << temp->data.price << endl;
        cout << endl;

        temp = temp->next;
    }
}