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
    std::cout << b;
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }
 
	return (0);
}
