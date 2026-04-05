#include <iostream>
#include <cstdlib>
#include <string>
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
  if (this != &other)
  {
    AForm::operator=(other);
    _target = other._target;
  }
  return (*this);
}

void RobotomyRequestForm::executeAction() const
{
  int res = std::rand() % 2;
  if (res == 0)
    std::cout << "Some drilling noises, " << _target << " has been robotomized\n";
  else
    std::cout << "Robotomy of " << _target << " failed\n";
}
