#include "Bureaucrat.hpp"

int main()
{

  try {
    Bureaucrat a("Waltuh", 1);
    Bureaucrat b("Jesse", 150);
    b.incrementGrade();
    std::cout << b;
    a.incrementGrade();
    std::cout << a;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
}
