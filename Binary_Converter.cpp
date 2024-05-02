//
//  Binary_Converter.cpp
//  llist
//
//  
//


#include "Binary_Converter.hpp"
#include <iostream>
using namespace std;


Stack::Stack() {
    top = nullptr;
}

Stack::~Stack() {
    clear();
}
void Stack::push(int value) {
    StackNode* newNode = new StackNode;
    newNode->value = value;
    newNode->next = top;
    top = newNode;
}

void Stack::pop() {
    if (isEmpty()) {
        cout << "Stcak is empty\n";
    } else {
        StackNode* temp = top;
        top = top->next;
        delete temp;
    }
}

void Stack::clear() {
    StackNode* temp;
    while (top != nullptr) {
        temp = top;
        top = top->next;
        delete temp;
    }
}

void Stack::displayStack() const {
    StackNode* nodePtr = top;
    
    while (nodePtr != nullptr) {
        cout << nodePtr->value << " ";
        nodePtr = nodePtr->next;
    }
    
    
}

bool Stack::isEmpty()const {
    return top == nullptr;
}

int Stack::peak() {
    return top->value;
}


Queue::Queue() {
    front = nullptr;
    rear = nullptr;
}

Queue::~Queue() {
    clear();
}

void Queue::enqueue(int value) {
    QueueNode* newNode = new QueueNode;
    newNode->value = value;
    newNode->next = nullptr;

    if (front == nullptr) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return;
    }

    QueueNode* temp = front;
    front = front->next;
    delete temp;

    if (front == nullptr) {
        rear = nullptr;
    }
}

bool Queue::isEmpty() const {
    return front == nullptr;
}

void Queue::clear() {
    while (!isEmpty()) {
        dequeue();
    }
}

void Queue::displayQueue() const {
    QueueNode* current = front;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}
