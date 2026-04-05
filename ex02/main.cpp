#include <iostream>
#include <exception>
#include <ctime>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
  std::srand(std::time(NULL));

  try
  {
    Bureaucrat d("Denis", 145);  
    ShrubberyCreationForm form("target");
    d.signForm(form);
    d.executeForm(form);
  } 
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }

  try
  {
    Bureaucrat d("Denis", 40);  
    RobotomyRequestForm form("target");
    d.signForm(form);
    d.executeForm(form);
  } 
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }

  try
  {
    Bureaucrat d("Denis", 5);  
    PresidentialPardonForm form("target");
    d.signForm(form);
    d.executeForm(form);
  } 
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }

  try
  {
    Bureaucrat d("Unsigned", 1);
    PresidentialPardonForm form("nobody");
    d.executeForm(form);
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }

  try
  {
    Bureaucrat signer("Signer", 40);
    Bureaucrat executor("Executor", 50);
    RobotomyRequestForm form("target2");

    signer.signForm(form);
    executor.executeForm(form);
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }
  return (0);
}
