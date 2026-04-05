#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
    std::srand(std::time(NULL));

    Intern intern;

    Bureaucrat boss("Boss", 1);
    Bureaucrat mid("Mid", 50);
    Bureaucrat low("Low", 150);

    std::cout << "\n--- create forms ---\n";
    AForm* robot = intern.makeForm("robotomy request", "Bender");
    AForm* pardon = intern.makeForm("presidential pardon", "Denis");
    AForm* shrub = intern.makeForm("shrubbery creation", "home");
    AForm* invalid = intern.makeForm("asdasd pardon", "Nobody");

    std::cout << "\n--- execute unsigned form ---\n";
    if (robot)
        boss.executeForm(*robot);

    std::cout << "\n--- sign and execute robotomy ---\n";
    if (robot)
    {
        boss.signForm(*robot);
        boss.executeForm(*robot);
    }

    std::cout << "\n--- insufficient grade for presidential pardon ---\n";
    if (pardon)
    {
        mid.signForm(*pardon);
        mid.executeForm(*pardon);
        boss.signForm(*pardon);
        boss.executeForm(*pardon);
    }

    std::cout << "\n--- shrubbery file creation ---\n";
    if (shrub)
    {
        low.signForm(*shrub);
        low.executeForm(*shrub);

        boss.signForm(*shrub);
        boss.executeForm(*shrub);
    }

    delete robot;
    delete pardon;
    delete shrub;
    delete invalid;

    return 0;
}
