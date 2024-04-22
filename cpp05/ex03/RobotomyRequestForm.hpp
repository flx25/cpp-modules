//
// Created by Felix Von nagel on 1/31/24.
//

#ifndef CPP05_GIT_ROBOTOMYREQUESTFORM_HPP
#define CPP05_GIT_ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm  : public AForm {
public:
    RobotomyRequestForm();

    RobotomyRequestForm(const RobotomyRequestForm& other);

    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

    ~RobotomyRequestForm();

    void execute(Bureaucrat const & executor) const;
private:
          std::string _target;


};

#endif // CPP05_GIT_ROBOTOMYREQUESTFORM_HPP
