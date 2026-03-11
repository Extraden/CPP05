#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "AForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& other);
		~Intern();
		Intern& operator=(const Intern& other);
		void makeForm(const std::string& name, const std::string& target);

	private:
		std::string _nameOfForm;
		std::string _targetOfForm;
};

#endif
