#include "LinkedList.h"


using namespace std;
#include <stdexcept>

// constructer to initialize head to nullptr
LinkedList::LinkedList() {
    this->head = nullptr;
    this->count = 0;
}

// a way to add an emplyee object to the end of the list
void LinkedList::add(Employee* data) {
    Node* node = new Node(data);
    // if the node is empty this sets the head to new Node
    if (this->head == nullptr) {
        this->head = node;
    }
    // if not then this statment will find the last node in the list and set its next pointer to the new Node
    else {
        Node* current = this->head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = node;
    }
    // increments the count of the nodes in the list
    this->count++;
}
// a way to get the Employee object at the specified index
Employee* LinkedList::get(int index){
    // a message if the index is out of bounds
    if (index <  0 || index >= this->count) {
        throw out_of_range("Index out of bounds");
    }
    // searched the list to find the node at the specified index
    Node* current = this->head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    // will return the data from the node at the specified index
    return current->data;
}
// a way to get the number of nodes in the list
int LinkedList::size() {
    return this->count;
}
