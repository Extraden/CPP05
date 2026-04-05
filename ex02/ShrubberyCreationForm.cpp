#include <string>
#include <fstream>
#include <stdexcept>
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
: AForm(other), _target(other._target)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void  ShrubberyCreationForm::executeAction() const
{
  std::string filename = this->_target + "_shrubbery";
  std::ofstream f(filename.c_str());
  if (!f)
    throw std::runtime_error("Could not open file");

  f << "    *              *              *\n"
       "   ***            ***            ***\n"
       "  *****          *****          *****\n"
       " *******        *******        *******\n"
       "*********      *********      *********\n"
       "    |              |              |\n"
       "    |              |              |\n";

  f.close();
}
