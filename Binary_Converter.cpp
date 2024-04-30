//
//  Binary_Converter.cpp
//  llist
//
//  
//

#include "Binary_Converter.hpp"
#include <stack>
#include <queue>
#include <iostream>
using namespace std;


Binary_Converter::Binary_Converter(double num) : decimalNum(num)
{
    integerPart = static_cast<int>(num);
    decimalPart = num - integerPart;
}

void Binary_Converter::convertToBinary()
{
    stack<int> integerStack;
    queue<int> decimalQueue;

    int integer = integerPart;
    while (integer > 0)
    {
        integerStack.push(integer % 2);
        integer /= 2;
    }

    int maxFractionalBits = 32;
    int count = 0;
    double decimal = decimalPart;

    while (decimal > 0 && count < maxFractionalBits)
    {
        decimal *= 2;
        decimalQueue.push(static_cast<int>(decimal));
        decimal -= static_cast<int>(decimal);
        count++;
    }

    cout << "Binary Representation: ";
    while (!integerStack.empty())
    {
        cout << integerStack.top();
        integerStack.pop();
    }
    cout << '.';

    while (!decimalQueue.empty())
    {
        cout << decimalQueue.front();
        decimalQueue.pop();
    }

    cout << endl;
}
