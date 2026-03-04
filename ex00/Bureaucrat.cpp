#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
  if (grade < 1)
    throw GradeTooHighException();
  if (grade > 150)
    throw GradeTooLowException();
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

const std::string& Bureaucrat::getName() const
{
  return (_name);
}

int Bureaucrat::getGrade() const
{
  return (_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
  return ("Grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
  return ("Grade too low!");
}

void Bureaucrat::incrementGrade()
{
  if (_grade <= 1)
    throw GradeTooHighException();
  _grade--;
}

void Bureaucrat::decrementGrade()
{
  if (_grade >= 150)
    throw GradeTooLowException();
  _grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other)
{
  os << other.getName() << ", bureaucrat grade " << other.getGrade();
  return (os);
}
