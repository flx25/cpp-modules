//
// Created by Felix Von nagel on 1/31/24.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  if (this != &other) { // Check for self-assignment
    _target = other._target;
    return *this;
  }
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
  if (!getIsSigned())
    throw AForm::NotSignedException();
  else if (getGradeToExecute() < executor.getGrade())
    throw AForm::GradeTooLowException();
  else {
        std::srand(static_cast<unsigned int>(std::time(0)));
        std::cout << "*Drilling-Noises* ";
        int randomNumber = rand();
        if (randomNumber % 2 == 0)
          std::cout << _target << " has been robotomized." << std::endl;
        else
          std::cout << "robotomy has failed." << std::endl;
  }
}