//
//  Binary_Converter.hpp
//
//
//
//

#ifndef Binary_Converter_H
#define Binary_Converter_H

class Binary_Converter
{
private:
    double decimalNum;
    int integerPart;
    double decimalPart;

public:
    Binary_Converter(double num);
    void convertToBinary();
    void printResult();
};

#endif
