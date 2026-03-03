#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
  if (_grade > 150 || _grade < 1)
  {
    std::cout << "Error, wrong grade during creating a bureaucrat!\n";
  }
  std::cout << "Bureaucrat " << _name << " with grade "<< _grade << " is created!\n";
}

Bureaucrat::~Bureaucrat()
{
  std::cout << "Bureaucrat " << _name << " is destroyed!\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name),
                                                  _grade(other._grade)
{
  std::cout << "Bureaucrat copy constructor is called!\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
  std::cout << "Assignment operator of Bureaucrat is called!\n";
  if (this != &other)
    this->_grade = other._grade;
  return (*this);
}

const std::string& Bureaucrat::getName()
{
  return (_name);
}

int Bureaucrat::getGrade()
{
  return (_grade);
}
