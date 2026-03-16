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
		AForm* makeForm(const std::string& name, const std::string& target) const;

	private:
		static AForm* createShrubbery(const std::string& name);
		static AForm* createRobotomy(const std::string& name);
		static AForm* createPresidential(const std::string& name);

		std::string _nameOfForm;
		std::string _targetOfForm;
};

#endif
