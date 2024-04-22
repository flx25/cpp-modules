//
// Created by Felix Von nagel on 12/13/23.
//

#ifndef CPP04_BRAIN_HPP
#define CPP04_BRAIN_HPP
#include <string>
#include <iostream>

#pragma once

class Brain {
public:
    Brain();
    
    Brain(const Brain& other);
    
    Brain& operator=(const Brain& other);

    ~Brain();

private:
    std::string ideas[100];
    
};


#endif //CPP04_BRAIN_HPP
