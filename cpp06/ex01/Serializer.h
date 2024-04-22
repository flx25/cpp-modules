//
// Created by fvon-nag on 12.02.24.
//

#ifndef CPP06_SERIALIZER_H
#define CPP06_SERIALIZER_H


#include <stdint.h>
#include "Data.h"

class Serializer {
public:

static uintptr_t serialize(Data* ptr);
static Data* deserialize(uintptr_t raw);


private:
    Serializer();
    ~Serializer();
};

#endif //CPP06_SERIALIZER_H
