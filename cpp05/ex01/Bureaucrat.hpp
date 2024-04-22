//
// Created by Felix Von nagel on 1/25/24.
//

#ifndef CPP05_GIT_BUREAUCRAT_HPP
#define CPP05_GIT_BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
public:
    Bureaucrat(const std::string name, int grade);
    Bureaucrat();
    Bureaucrat(const Bureaucrat& other);

    Bureaucrat& operator=(const Bureaucrat& other);

    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form & form);

    class GradeTooHighException : public std::exception{
      virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception{
      virtual const char *what() const throw();
    };
private:
  const std::string name;
  int grade;
    
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat);
#endif // CPP05_GIT_BUREAUCRAT_HPP
