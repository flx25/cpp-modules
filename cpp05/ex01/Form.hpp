//
// Created by Felix Von nagel on 1/29/24.
//

#ifndef CPP05_GIT_FORM_HPP
#define CPP05_GIT_FORM_HPP


#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
  Form();

  Form(const std::string name, int gradeToSign, int gradeToExecute);

  Form(const Form & other);

  Form & operator=(const Form & other);

    ~Form();

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat& bureaucrat);

private:
  const std::string name;
  bool isSigned;
  const int gradeToSign;
  const int gradeToExecute;


  class GradeTooHighException : public std::exception{
    virtual const char *what() const throw();
  };
  class GradeTooLowException : public std::exception{
    virtual const char *what() const throw();
  };
};

std::ostream	&operator<<(std::ostream &o, const Form &form);

#endif // CPP05_GIT_FORM_HPP
