#include "Intern.hpp"

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
