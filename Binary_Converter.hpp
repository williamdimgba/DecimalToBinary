//
//  Binary_Converter.hpp
//
//
//
//

#ifndef Binary_Converter_H
#define Binary_Converter_H

class Stack {
private:
    struct StackNode{
        int value;
        struct StackNode* next;
    };
    
    StackNode* top;
    
public:
    Stack();
    ~Stack();
    void push(int);
    void pop();
    int peak();
    bool isEmpty()const;
    void displayStack()const;
    void clear();
};

class Queue {
private:
    struct QueueNode{
        int value;
        struct QueueNode* next;
    };
    
    QueueNode* front;
    QueueNode* rear;
public:
    Queue();
    ~Queue();
    
    void enqueue(int);
    void dequeue();
    bool isEmpty()const;
    void clear();
    void displayQueue()const;
};

#endif
