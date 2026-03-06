#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default"),
                _isSigned(false),
                _gradeToSign(150),
                _gradeToExec(150)
{}
  

Form::Form(const std::string& name, int gradeToSign, int gradeToExec) : _name(name),
                                                                _isSigned(false),
                                                                _gradeToSign(gradeToSign),
                                                                _gradeToExec(gradeToExec)
{
  if (gradeToSign < 1 || gradeToExec < 1)
    throw GradeTooHighException();
  if (gradeToSign > 150 || gradeToExec > 150)
    throw GradeTooLowException();
}

Form::Form(const Form& other) : _name(other._name),
                                _isSigned(other._isSigned),
                                _gradeToSign(other._gradeToSign),
                                _gradeToExec(other._gradeToExec)
{}

Form& Form::operator=(const Form& other)
{
  if (this != &other)
    _isSigned = other._isSigned;
  return (*this);
}

Form::~Form() {}

void Form::beSigned(const Bureaucrat& b)
{
  if (b.getGrade()<= _gradeToSign)
    _isSigned = true;
  else 
    throw GradeTooLowException();
}

/* Getters */ 


const std::string& Form::getName() const
{
  return (_name);
}

bool Form::isSigned() const
{
  return (_isSigned);
}

int Form::getGradeToSign() const
{
  return (_gradeToSign);
}

int Form::getGradeToExec() const
{
  return (_gradeToExec);
}

/* Exception */

const char* Form::GradeTooHighException::what() const throw()
{
  return ("Grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
  return ("Grade is too low!");
}

std::ostream& operator<<(std::ostream& os, const Form& other)
{
  os << "Form " << other.getName() << " ";
  if (other.isSigned())
    os << "is signed, ";
  else
    os << "is not signed, ";
  os << "grade to execute: " << other.getGradeToExec()
      << ", grade to sign: " << other.getGradeToSign();
  return (os);
}
