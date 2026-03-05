#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name),
                                                                _isSigned(false),
                                                                _gradeToSign(gradeToSign),
                                                                _gradeToExec(gradeToExec)
{

}

Form::~Form() {}

void Form::biSigned(Bureaucrat& b)
{
  
}
