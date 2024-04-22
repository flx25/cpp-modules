//
// Created by Felix Von nagel on 1/29/24.
//

#include "AForm.hpp"
AForm::AForm() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150) {

}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
  if (gradeToSign < 1 || gradeToExecute < 1)
    throw GradeTooHighException();
  if (gradeToSign > 150 || gradeToExecute > 150)
    throw GradeTooLowException();
}

AForm::AForm(const AForm &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {

}

AForm &AForm::operator=(const AForm &other) {
  if (this != &other) { // Check for self-assignment
    isSigned = other.isSigned;
    return *this;
  }
  return *this;
}
AForm::~AForm() {}

std::string AForm::getName() const { return std::string(name); }

bool AForm::getIsSigned() const { return isSigned; }

int AForm::getGradeToSign() const { return gradeToSign; }

int AForm::getGradeToExecute() const { return gradeToExecute; }

void AForm::beSigned(Bureaucrat &bureaucrat) {
        if (bureaucrat.getGrade() > gradeToSign)
          throw GradeTooLowException();
        if (isSigned)
          std::cout << bureaucrat.getName() << " cannot sign " << getName() << " it is already signed" << std::endl;
        else
        {
          isSigned = true;
          std::cout << bureaucrat.getName() << " signs " << getName() << std::endl;
        }
}

std::ostream	&operator<<(std::ostream &o, const AForm &AForm)
{
  o <<  AForm.getName() << ", AForm is signed: " << AForm.getIsSigned()
    << ", grade to sign: " << AForm.getGradeToSign() << ", grade to execute: " << AForm.getGradeToExecute() << std::endl;
  return o;
}
const char *AForm::GradeTooHighException::what() const throw() {
        return "Exception: Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
        return "Exception: Grade too low";
}
const char *AForm::NotSignedException::what() const throw() {
        return "Exception: Form not signed";
}
