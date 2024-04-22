//
// Created by fvon-nag on 02.02.24.
//

#ifndef CPP06_SCALARCONVERTER_H
#define CPP06_SCALARCONVERTER_H



#include <string>
#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>
#include <iomanip>
#include <cctype>

class ScalarConverter {
public:
    static void convert(std::string input);
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &src);
    ~ScalarConverter();
    ScalarConverter &operator=(const ScalarConverter &rhs);
    static int isnumeric(std::string input);

    static void getType(std::string input);

    static void handleNumeric(std::string input);

    static std::string determinNumeric(std::string input);

    static void convertPrintFloat(std::string input);

    static void convertPrintDouble(std::string input);

    static void convertPrintInt(std::string input);

    static void convertPrintChar(std::string input);

    static void convertPrintInf(std::string input);

    static void convertPrintNan();
};

#endif //CPP06_SCALARCONVERTER_H
