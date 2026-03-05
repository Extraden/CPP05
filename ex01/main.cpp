#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int	main()
{
  try
  {
    Bureaucrat a("Denis", 151);
  }
  catch (const std::exception &e)
  {
    std::cout << e.what() << "\n";
  }

  try
  {
    Bureaucrat b("Maxence", 20);  
    std::cout << b << "\n";
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }
 
  try
  {
    Bureaucrat c("Roman", 1);
    std::cout << c << "\n";
    c.incrementGrade();
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }

  try 
  {
    Bureaucrat d("Michael", 150);
    std::cout << d << "\n";
    d.decrementGrade();
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }
	return (0);
}
