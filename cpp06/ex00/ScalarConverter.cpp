//
// Created by fvon-nag on 02.02.24.
//


#include "ScalarConverter.h"

std::string ScalarConverter::determinNumeric(std::string input){
    if (input.find('f'))
        return "Float";
    else if (input.find('.'))
        return "Double";
    else
        return "Int";
}

void ScalarConverter::handleNumeric(std::string input)
{
    if (determinNumeric(input) == "Float")
        convertPrintFloat(input);
    else if (determinNumeric(input) == "Double")
        convertPrintDouble(input);
    else
        convertPrintInt(input);

}

void ScalarConverter::getType(std::string input)
{
    if (input.length() == 1 && !isdigit(input.at(0)))
        convertPrintChar(input);
    else if (input == "+inff" || input == "-inff" || input == "+inf" || input == "+inf" || input == "inf" || input == "inff")
        convertPrintInf(input);
    else if (input == "nan" || input == "nanf" )
        convertPrintNan();
    else if (isnumeric(input))
        handleNumeric(input);
    else
        std::cout << "Invalid input." << std::endl;

}

int ScalarConverter::isnumeric(std::string input)
{
    size_t i = 0;

    if (input[i] == '+' || input[i] == '-')
        i++;
    for(;i < input.length(); i++)
    {
        if (!isdigit(input[i]) && input[i] != '.' && input[i] != 'f')
            return (0);
    }
    return (1);
}
void ScalarConverter::convert(std::string input) {
    getType(input);
}



void ScalarConverter::convertPrintFloat(std::string input){
    float floatValue = atof(input.c_str());
    if (floatValue >= std::numeric_limits<char>::min() && floatValue <= std::numeric_limits<char>::max()){
        char ch = static_cast<char>(floatValue);
        if (isprint(ch))
            std::cout << "char: " << ch << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    } else
        std::cout << "char: impossible" << std::endl;

    if (floatValue < std::numeric_limits<int>::min() || floatValue > std::numeric_limits<int>::max())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(floatValue) << std::endl;

    std::cout << std::fixed << std::setprecision(1) << "float: "  << floatValue << "f" << std::endl;

    std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(floatValue) << std::endl;

}

void ScalarConverter::convertPrintDouble(std::string input){
    double doubleValue = atof(input.c_str());
    if (doubleValue >= std::numeric_limits<char>::min() && doubleValue <= std::numeric_limits<char>::max()){
        char ch = static_cast<char>(doubleValue);
        if (isprint(ch))
            std::cout << "char: " << ch << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    } else
        std::cout << "char: impossible" << std::endl;

    if (doubleValue < std::numeric_limits<int>::min() || doubleValue > std::numeric_limits<int>::max())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(doubleValue) << std::endl;

    std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(doubleValue) << "f" << std::endl;

    std::cout << std::fixed << std::setprecision(1)  << "double: " << doubleValue << std::endl;


}

void ScalarConverter::convertPrintInt(std::string input) {
    int intValue = atoi(input.c_str());
    if (intValue>= std::numeric_limits<char>::min() && intValue <= std::numeric_limits<char>::max()){
        char ch = static_cast<char>(intValue);
        if (isprint(ch))
            std::cout << "char: " << ch << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }else
        std::cout << "char: impossible" << std::endl;

    std::cout << "int: " << intValue << std::endl;

    std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(intValue) << "f" << std::endl;

    std::cout << std::fixed << std::setprecision(1)  << "double: " << static_cast<double> (intValue) << std::endl;

}

void ScalarConverter::convertPrintChar(std::string input){
    char charValue = input[0];
    if (charValue >= std::numeric_limits<char>::min() && charValue <= std::numeric_limits<char>::max()){
        if (isprint(charValue))
            std::cout << "char: " << charValue << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    } else
        std::cout << "char: impossible" << std::endl;

    std::cout << "int: " << static_cast<int>(charValue) << std::endl;

    std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(charValue) << "f" << std::endl;

    std::cout << std::fixed << std::setprecision(1)  << "double: " << static_cast<double>(charValue) << std::endl;
}

void ScalarConverter::convertPrintInf(std::string input){

    std::cout << "char: impossible" << std::endl;

    std::cout << "int: impossible" << std::endl;

    if (input[0] == '-')
    std::cout << "float: -inff" << std::endl;
    else
        std::cout << "float: inff" << std::endl;

    if (input[0] == '-')
        std::cout << "double: -inf" << std::endl;
    else
        std::cout << "double: inf" << std::endl;

}

void ScalarConverter::convertPrintNan(){

    std::cout << "char: impossible" << std::endl;

    std::cout << "int: impossible" << std::endl;

    std::cout << "float: nanf" << std::endl;

    std::cout << "double: nan" << std::endl;

}


ScalarConverter::ScalarConverter() {

}

ScalarConverter::~ScalarConverter() {

}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
    static_cast<void>(rhs);
    return *this;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {
    static_cast<void>(src);
}

