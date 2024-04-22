//
// Created by Felix Von nagel on 2/1/24.
//

#include "Intern.hpp"
Intern::Intern() {}

Intern::Intern(const Intern &other) {
  (void) other;
}

Intern &Intern::operator=(const Intern &other) {
  (void) other;
    return *this;
}

static AForm	*makePresident(const std::string target)
{
    return (new PresidentialPardonForm(target));
}

static AForm	*makeRobot(const std::string target)
{
    return (new RobotomyRequestForm(target));
}

static AForm	*makeShrubbery(const std::string target)
{
    return (new ShrubberyCreationForm(target));
}


Intern::~Intern() {}
AForm *Intern::makeForm(std::string formName, std::string target) {

    AForm *(*all_forms[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
    std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creation"};

    for (int i = 0; i < 3; i++)
    {
      if (formName == forms[i])
      {
        std::cout <<  "Intern creates " << formName << std::endl;
        return all_forms[i](target);
      }
    }
    throw CanNotCreateForm();
}
const char *Intern::CanNotCreateForm::what() const throw() {
  return "Exception: Form does not exist";
}
