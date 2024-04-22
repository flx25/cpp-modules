//
// Created by Felix Von nagel on 12/13/23.
//

#ifndef CPP04_WRONGCAT_HPP
#define CPP04_WRONGCAT_HPP
#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal {
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat& other);
    void makeSound() const;
    using WrongAnimal::operator=;


};


#endif //CPP04_WRONGCAT_HPP
