//
// Created by Felix Von nagel on 2/1/24.
//

#ifndef CPP05_GIT_INTERN_HPP
#define CPP05_GIT_INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
    Intern();

    Intern(const Intern& other);

    Intern& operator=(const Intern& other);

    AForm *makeForm(std::string formName, std::string target);

    ~Intern();

    class CanNotCreateForm : public std::exception{
      virtual const char *what() const throw();
    };
private:

};
#endif // CPP05_GIT_INTERN_HPP
