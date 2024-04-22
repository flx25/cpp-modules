#include "Bureaucrat.hpp"

int main()
{

  try {
    Bureaucrat a("Waltuh", 1);
    Bureaucrat b("Jesse", 150);
    Form f("Methamphetamine exportation form", 1, 1);
        std::cout << a << b << f;
    a.signForm(f);
    f.beSigned(a);
        b.signForm(f);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
}
