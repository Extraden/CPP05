#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>

class Intern
{
	public:
		Intern();
		Intern(const Intern& other);
		~Intern();
		Intern& operator=(const Intern& other);

	private:
		std::string _nameOfForm;
		std::string _targetOfForm;
};

#endif
