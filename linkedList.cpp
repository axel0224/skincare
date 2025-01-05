/*
    Source file for linkedList.cpp
*/
#include "linkedList.h"

linkedList::linkedList() {
    head = NULL;
    tail = NULL;
}

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
