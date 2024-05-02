//
//  main.cpp
//
//


#include "Binary_Converter.hpp"
#include <iostream>
using namespace std;

void convertNumberToBinary(Stack &, int);
void convertDecimalToBinary(Queue &, double, int );

int main() {
    Stack s;
    Queue q;
    
    double decimal;
    int places;
    
    do {
        cout << "Pls enter the decimal you want to convert: \n";
        cin >> decimal;
    } while(decimal < 0);
    
    do {
        cout << "How many decimal places do you want to convert to: \n";
        cin >> places;
    } while(places < 0);
    
    int num = static_cast<int>(decimal);
    double decimalNum = decimal - num;
    
    convertNumberToBinary(s, num);
    convertDecimalToBinary(q, decimalNum, places);
    
    cout << decimal << " to binary is:  ";
    s.displayStack();
    cout << ".";
    q.displayQueue();
    
    return 0;
}

void convertNumberToBinary(Stack &s, int num) {
    while (num != 0) {
        int remainder = num % 2;
        s.push(remainder);
        num /= 2;
    }
}

void convertDecimalToBinary(Queue &q, double decimal, int precision) {
    while (precision > 0) {
        decimal *= 2;
        int bit = static_cast<int>(decimal);
        q.enqueue(bit);
        decimal -= bit;
        precision--;
    }
}
