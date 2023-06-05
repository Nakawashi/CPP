#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>

class Warlock
{
public:
	Warlock(const std::string& newName, const std::string& newTitle);
	~Warlock(void);

	const std::string&	getName(void) const;
	const std::string&	getTitle(void) const;
	void				setTitle(const std::string& newTitle);
	void				introduce(void) const;

private:
	Warlock(void);
	std::string			_name;
	std::string			_title;
};

#endif