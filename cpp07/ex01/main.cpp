//
// Created by fvon-nag on 04.03.24.
//

#include "iter.h"

int main(void)
{
    int intArr[] = {1, 2, 3, 4, 5};
    iter(intArr, 5, print);

    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    iter(doubleArr, 5, print);

    std::string strArr[] = {"Hello", "World", "Test", "Array", "String"};
    iter(strArr, 5, print);

    return 0;
}