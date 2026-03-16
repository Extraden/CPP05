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
		static AForm* createShrubbery(const std::string& target);
		static AForm* createRobotomy(const std::string& target);
		static AForm* createPresidential(const std::string& target);
};

#endif
