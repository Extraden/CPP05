#include "Intern.hpp"

Intern::Intern(const std::string& nameOfForm, const std::string& targetOfForm) : _nameOfForm(nameOfForm), _targetOfForm(targetOfForm)
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
