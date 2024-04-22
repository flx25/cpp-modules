//
// Created by Felix Von nagel on 1/29/24.
//

#ifndef CPP05_GIT_FORM_HPP
#define CPP05_GIT_FORM_HPP


#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
public:
  AForm();

  AForm(const std::string name, int gradeToSign, int gradeToExecute);

  AForm(const AForm & other);

  AForm & operator=(const AForm & other);

    virtual ~AForm();

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat& bureaucrat);
    virtual void execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException : public std::exception{
      virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception{
      virtual const char *what() const throw();
    };
    class NotSignedException : public std::exception {
      virtual const char *what() const throw();
    };

private:
  const std::string name;
  bool isSigned;
  const int gradeToSign;
  const int gradeToExecute;



};

std::ostream	&operator<<(std::ostream &o, const AForm &form);

#endif // CPP05_GIT_FORM_HPP
