//
// Created by Felix Von nagel on 1/29/24.
//

#include "Form.hpp"
Form::Form() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150) {

}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
  if (gradeToSign < 1 || gradeToExecute < 1)
    throw GradeTooHighException();
  if (gradeToSign > 150 || gradeToExecute > 150)
    throw GradeTooLowException();
}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {

}

Form &Form::operator=(const Form &other) {
  if (this != &other) { // Check for self-assignment
    isSigned = other.isSigned;
    return *this;
  }
  return *this;
}
Form::~Form() {}

std::string Form::getName() const { return std::string(name); }

bool Form::getIsSigned() const { return isSigned; }

int Form::getGradeToSign() const { return gradeToSign; }

int Form::getGradeToExecute() const { return gradeToExecute; }

void Form::beSigned(Bureaucrat &bureaucrat) {
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

std::ostream	&operator<<(std::ostream &o, const Form &form)
{
  o <<  form.getName() << ", form is signed: " << form.getIsSigned()
    << ", grade to sign: " << form.getGradeToSign() << ", grade to execute: " << form.getGradeToExecute() << std::endl;
  return o;
}
const char *Form::GradeTooHighException::what() const throw() {
        return "Exception: Grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {
        return "Exception: Grade too low";
}