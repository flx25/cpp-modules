//
// Created by fvon-nag on 26.02.24.
//
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

Base *generate(void) {
    std::srand(time(0));
    int choice = std::rand() % 3;

    switch (choice) {
        case 0:
            return new A;
        case 1:
            return new B;
        case 2:
            return new C;
    }
    return NULL;
}

void identify(Base *p) {
    if (A* ptr = dynamic_cast<A*>(p))
        std::cout << p << "is of type A" << std::endl;
    else if (B* ptr1 = dynamic_cast<B*>(p))
        std::cout << p << "is of type B" << std::endl;
    else if (C* ptr2 = dynamic_cast<C*>(p))
        std::cout << p << "is of type C" << std::endl;
    else
        std::cout << p << "is of unknown type" << std::endl;

}

void identify(Base &p) {
    try {
        A& ref = dynamic_cast<A&>(p);
        std::cout << &p << "is of type A" << std::endl;
        (void)ref;
    }
    catch (...){
        try {
            B& ref1 = dynamic_cast<B&>(p);
            std::cout << &p << "is of type B" << std::endl;
            (void)ref1;
        }
        catch (...)
        {
            try{
            C& ref2 = dynamic_cast<C&>(p);
            std::cout << &p << "is of type C" << std::endl;
            (void)ref2;
            }
            catch(...) {
                std::cout << &p << "is of unknown type" << std::endl;
            }
        }
    }
}
