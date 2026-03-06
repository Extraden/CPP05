#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main()
{
  try
  {
    Bureaucrat a("Denis", 6);  
    std::cout << a << "\n";
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }


  try
  {
    Bureaucrat b("Maxence", 5);  
    std::cout << b << "\n";
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }
  return (0);
}
