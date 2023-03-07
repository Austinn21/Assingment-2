#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Employee.h"

class Node {
public:
    Employee* data;
    Node* next;
    // constructor for the node
    Node(Employee* data) {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;// pointer
    int count;// number of nodes

public:
    // constructor for Linkedlist
    LinkedList();
    // new node for the end of the linked list
    void add(Employee* data);
    // sorts data for the node
    Employee* get(int index);
    // gets the number of nodes
    int size();
};

#endif
