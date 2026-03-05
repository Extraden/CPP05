#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <cstdbool>
#include "Bureaucrat.hpp"

class Form
{
  public:
    Form();
    Form(std::string name, int gradeToSign, int gradeToExec);

    Form(const Form& other);
    ~Form();

    void biSigned(Bureaucrat& b);
  private:
    std::string _name;
    bool  _isSigned;
    const int _gradeToSign;
    const int _gradeToExec;
};

#endif
