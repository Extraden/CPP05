#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"),
                _isSigned(false),
                _gradeToSign(150),
                _gradeToExec(150)
{}
  
AForm::AForm(const std::string& name, int gradeToSign, int gradeToExec)
  : _name(name),
    _isSigned(false),
    _gradeToSign(gradeToSign),
    _gradeToExec(gradeToExec)
{
  if (gradeToSign < 1 || gradeToExec < 1)
    throw GradeTooHighException();
  if (gradeToSign > 150 || gradeToExec > 150)
    throw GradeTooLowException();
}

AForm::AForm(const AForm& other) 
  : _name(other._name),
    _isSigned(other._isSigned),
    _gradeToSign(other._gradeToSign),
    _gradeToExec(other._gradeToExec)
{}

AForm& AForm::operator=(const AForm& other)
{
  if (this != &other)
    _isSigned = other._isSigned;
  return (*this);
}

AForm::~AForm() {}

void AForm::beSigned(const Bureaucrat& b)
{
  if (b.getGrade() <= _gradeToSign)
    _isSigned = true;
  else 
    throw GradeTooLowException();
}

// Getters

const std::string& AForm::getName() const
{
  return (_name);
}

bool AForm::isSigned() const
{
  return (_isSigned);
}

int AForm::getGradeToSign() const
{
  return (_gradeToSign);
}

int AForm::getGradeToExecute() const
{
  return (_gradeToExec);
}

// Exceptions

const char* AForm::GradeTooHighException::what() const throw()
{
  return ("Grade is too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
  return ("Grade is too low!");
}

const char* AForm::FormNotSignedException::what() const throw()
{
  return ("Form is not signed!");
}

// Execute method

void AForm::execute(Bureaucrat const& executor) const
{
  if (!this->isSigned())
    throw FormNotSignedException();
  if (executor.getGrade() > this->getGradeToExecute())
    throw GradeTooLowException();
  this->executeAction();
}

// Operator <<

std::ostream& operator<<(std::ostream& os, const AForm& other)
{
  os << "Form " << other.getName() << " ";
  if (other.isSigned())
    os << "is signed, ";
  else
    os << "is not signed, ";
  os << "grade to execute: " << other.getGradeToExecute()
      << ", grade to sign: " << other.getGradeToSign();
  return (os);
}
