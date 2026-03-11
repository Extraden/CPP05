#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{

  try
  {
    Bureaucrat d("Denis", 145);  
    ShrubberyCreationForm form("target");
    d.signForm(form);
    form.execute(d);
  } 
  catch (std::exception& e)
  {
    std::cout << e.what() << "\n";
  }


  try
  {
    Bureaucrat d("Denis", 40);  
    RobotomyRequestForm form("target");
    d.signForm(form);
    form.execute(d);
  } 
  catch (std::exception& e)
  {
    std::cout << e.what() << "\n";
  }

  return (0);
}
