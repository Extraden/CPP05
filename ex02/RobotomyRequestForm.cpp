#include <string>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
  (void) other;
}


RobotomyRequestForm::~RobotomyRequestForm()
{

}
