#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

  try {
    Bureaucrat a("Waltuh", 1);
    Bureaucrat b("Jesse", 150);
    ShrubberyCreationForm f("tree");
    RobotomyRequestForm f1("Brock");
    PresidentialPardonForm f2("Waltuh");

    std::cout << a << b << f;
    f.beSigned(a);
    f1.beSigned(a);
    f.execute(a);
    f1.execute(a);
    f2.beSigned(a);
    f2.execute(a);
    a.executeForm(f2);
    f2.execute(b);

} catch
        (std::exception &e) {
        std::cout << e.what() << std::endl;
        }
        return 0;
}