//
// Created by fvon-nag on 26.02.24.
//

#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void)
{
    A a;
    B b;
    C c;

    identify(&b);
    Base *d = generate();
    identify(d);
    identify(*d);
}