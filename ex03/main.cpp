#include <iostream>
#include "Intern.hpp"

int	main()
{
	std::cout << "Hello!\n";
	Intern i;
	
	AForm* a = i.makeForm("robotomy request", "Bender");
	AForm* b = i.makeForm("presidential pardon", "Denis");
	AForm* c = i.makeForm("asdasd pardon", "Denis");

	delete a;
	delete b;
	delete c;
  	return (0);
}
