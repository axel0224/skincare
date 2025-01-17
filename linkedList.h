/*
    Header file for linkedList.cpp
*/
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

using namespace std;

class linkedList {
    private:
        struct Product {
            string brand, type, use, store;
            float price;
        };

        struct node {
            Product data;
            node* next;
        };
        node* head;
        node* tail;

    public:
        linkedList();
        Product addProduct();
        void printList();
        Product removeProduct(Product p);
        
        ~linkedList();
};

#endif