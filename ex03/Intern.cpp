#include "Intern.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern()
{
}

Intern::Intern(const Intern& other) : _nameOfForm(other._nameOfForm), _targetOfForm(other._targetOfForm)
{
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern& other)
{
	if (this != &other)
	{
		_nameOfForm = other._nameOfForm;
		_targetOfForm = other._targetOfForm;
	}
	return (*this);
}

AForm* Intern::createRobotomy(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::createShrubbery(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::createPresidential(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) const
{
	const std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	AForm* (*funcs[3])(const std::string&) = 
	{
		&Intern::createRobotomy,
		&Intern::createPresidential,
		&Intern::createShrubbery
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			AForm* res = funcs[i](target);
			std::cout << "Intern creates " << name << "\n";
			return (res);
		}
	}

	return (NULL);
}
