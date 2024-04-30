//
//  main.cpp
//
//

#include "Binary_Converter.hpp"
#include <iostream>
using namespace std;


int main()
{
    double decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    Binary_Converter converter(decimalNumber);
    converter.convertToBinary();

    return 0;
}
