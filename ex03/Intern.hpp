#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>

class Intern
{
	public:
		Intern(const std::string& nameOfForm, const std::string& targetOfForm);
		Intern(const Intern& other);
		~Intern();
		Intern& operator=(const Intern& other);

	private:
		std::string _nameOfForm;
		std::string _targetOfForm;
};

#endif
