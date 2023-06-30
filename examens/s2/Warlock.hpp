#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include <map>


class Warlock
{
public:
	Warlock(std::string name, std::string title);
	~Warlock();

	const std::string&	getName() const;
	const std::string&	getTitle() const;
	void				setTitle(const std::string& title);
	void				introduce() const;
	void				learnSpell(ASpell* spell);
	void				forgetSpell(std::string spellName);
	void				launchSpell(std::string spellName, ATarget& target);


private:
	Warlock();
	Warlock(const Warlock& src);
	Warlock&	operator=(const Warlock& rhs);

	std::string									_name;
	std::string									_title;
	std::map<std::string, ASpell*>				_book;
	std::map<std::string, ASpell*>::iterator	_it;
};

#endif
