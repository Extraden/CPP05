#include <iostream>
#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "Hello!\n";
  Bureaucrat a("Denis", 12);

  Bureaucrat b(a);
	return (0);
}
