#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <ostream>
#include <exception>

class Bureaucrat;

class AForm
{
  public:
    AForm();
    AForm(const std::string& name, int gradeToSign, int gradeToExec);
    AForm(const AForm& other);
    virtual ~AForm();

    AForm& operator=(const AForm& other);

    // Getters
    
    const std::string& getName() const;
    bool isSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    // Exceptions 
    
    class GradeTooHighException : public std::exception
    {
      public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
      public:
        virtual const char* what() const throw();
    };

    void beSigned(const Bureaucrat& b);

  protected:
  
  private:
    const std::string _name;
    bool  _isSigned;
    const int _gradeToSign;
    const int _gradeToExec;
};

std::ostream& operator<<(std::ostream& os, const AForm& other);

#endif
