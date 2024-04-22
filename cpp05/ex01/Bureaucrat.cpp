//
// Created by Felix Von nagel on 1/25/24.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name){
if (grade > 150)
    throw GradeTooLowException();
      else if (grade < 1)
          throw GradeTooHighException();

this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)  {

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
if (this != &other) {  // Check for self-assignment
    // Implement assignment logic, including any necessary cleanup
    grade = other.grade;
}
return *this;
}

Bureaucrat::~Bureaucrat(){

}

std::string Bureaucrat::getName() const { return std::string(name); }
int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::incrementGrade() {
if (grade <= 1)
    throw GradeTooHighException();
grade--;
}
void Bureaucrat::decrementGrade() {
if (grade >= 150)
    throw GradeTooLowException();
grade++;
}
Bureaucrat::Bureaucrat() : name("Default"), grade(150) {

}

void Bureaucrat::signForm(Form &form) {
form.beSigned(*this);
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
 o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
        return o;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
        return "Exception: Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
        return "Exception: Grade too low";
}
