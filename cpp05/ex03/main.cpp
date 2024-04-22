#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{

  try {
    Bureaucrat a("Waltuh", 1);
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Brock");
    rrf->beSigned(a);
    rrf->execute(a);

} catch
        (std::exception &e) {
        std::cout << e.what() << std::endl;
        }
        return 0;
}