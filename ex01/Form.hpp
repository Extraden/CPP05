#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Form
{
  public:
    Form();
    Form(std::string name, int gradeToSign, int gradeToExec);

    Form(const Form& other);
    ~Form();

    Form& operator=(const Form& other);

    void biSigned(Bureaucrat& b);
  private:
    const std::string _name;
    bool  _isSigned;
    const int _gradeToSign;
    const int _gradeToExec;
};

#endif
