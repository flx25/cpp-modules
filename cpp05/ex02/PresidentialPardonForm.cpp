//
// Created by Felix Von nagel on 2/1/24.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Default") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), _target(other._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
  if (this != &other) { // Check for self-assignment
    _target = other._target;
    return *this;
  }
  return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
  if (!getIsSigned())
    throw AForm::NotSignedException();
  else if (getGradeToExecute() < executor.getGrade())
    throw AForm::GradeTooLowException();
  else
    std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

