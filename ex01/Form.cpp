#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name),
                                                                _isSigned(false),
                                                                _gradeToSign(gradeToSign),
                                                                _gradeToExec(gradeToExec)
{

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

void Form::biSigned(Bureaucrat& b)
{
    (void) b;
}
