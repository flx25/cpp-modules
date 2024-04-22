#include <iostream>
#include "Serializer.h"
#include <stdint.h>

int main(void)
{
    struct Data d;
    struct Data *d2;
    uintptr_t u;
    d.text = "test";

    std::cout << "d.text before conversion == " << d.text << std::endl;
    u = Serializer::serialize(&d);
    std::cout << "d after conversion == " << u << std::endl;
    d2 = Serializer::deserialize(u);
    std::cout << "d.text after reconversion == " << d2->text << std::endl;
}