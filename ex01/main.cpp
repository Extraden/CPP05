#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
  try
  {
    Bureaucrat a("Denis", 6);  
    std::cout << a << "\n";
    Form  f("document", 5, 3);
    std::cout << f << "\n";
    a.signForm(f);
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }

  try
  {
    Bureaucrat b("Maxence", 5);  
    std::cout << b << "\n";
    Form  f("random", 5, 3);
    std::cout << f << "\n";
    b.signForm(f);
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }

  try 
  {
    Form bad("bad", 0, 10);
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }

  try 
  {
    Form bad2("bad2", 10, 151);
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << "\n";
  }
  return (0);
}
