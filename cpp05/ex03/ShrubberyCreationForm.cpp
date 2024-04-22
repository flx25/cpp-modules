//
// Created by Felix Von nagel on 1/30/24.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
        if (this != &other) { // Check for self-assignment
          _target = other._target;
          return *this;
        }
        return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
  if (!getIsSigned())
                throw AForm::NotSignedException();
  else if (getGradeToExecute() < executor.getGrade())
                throw AForm::GradeTooLowException();
  else
  {
                std::ofstream outputFile(_target + "_shrubbery");
                outputFile << "                                               ." << std::endl;
                outputFile << "                                              .         ;  " << std::endl;
                outputFile << "                 .              .              ;%     ;;   " << std::endl;
                outputFile << "                   ,           ,                :;%  %;   " << std::endl;
                outputFile << "                    :         ;                   :;%;'     .,   " << std::endl;
                outputFile << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
                outputFile << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
                outputFile << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
                outputFile << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
                outputFile << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
                outputFile << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
                outputFile << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
                outputFile << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
                outputFile << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
                outputFile << "                          `@%%. `@%%    ;@@%;        " << std::endl;
                outputFile << "                            ;@%. :@%%  %@@%;       " << std::endl;
                outputFile << "                              %@bd%%%bd%%:;     " << std::endl;
                outputFile << "                                #@%%%%%:;;" << std::endl;
                outputFile << "                                %@@%%%::;" << std::endl;
                outputFile << "                                %@@@%(o);  . '         " << std::endl;
                outputFile << "                                %@@@o%;:(.,'         " << std::endl;
                outputFile << "                            `.. %@@@o%::;         " << std::endl;
                outputFile << "                               `)@@@o%::;         " << std::endl;
                outputFile << "                                %@@(o)::;        " << std::endl;
                outputFile << "                               .%@@@@%::;         " << std::endl;
                outputFile << "                               ;%@@@@%::;.          " << std::endl;
                outputFile << "                              ;%@@@@%%:;;;. " << std::endl;
                outputFile << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
                outputFile.close();
  }
}
