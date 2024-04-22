//
// Created by Felix Von nagel on 2/1/24.
//

#ifndef CPP05_GIT_PRESIDENTIALPARDONFORM_HPP
#define CPP05_GIT_PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
public:
    PresidentialPardonForm();
    
    PresidentialPardonForm(const PresidentialPardonForm& other);

    PresidentialPardonForm(const std::string target);

    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

    void execute(const Bureaucrat &executor) const;

    ~PresidentialPardonForm();

private:
  std::string _target;

};
#endif // CPP05_GIT_PRESIDENTIALPARDONFORM_HPP
