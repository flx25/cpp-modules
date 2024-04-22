//
// Created by Felix Von nagel on 1/30/24.
//

#ifndef CPP05_GIT_SHRUBBERYCREATIONFORM_HPP
#define CPP05_GIT_SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const &executor) const;

      private:
        std::string _target;
};

#endif // CPP05_GIT_SHRUBBERYCREATIONFORM_HPP
