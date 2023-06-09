#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock
{
public:
	Warlock(const std::string& newName, const std::string& newTitle);
	~Warlock(void);

	const std::string&	getName(void) const;
	const std::string&	getTitle(void) const;
	void				setTitle(const std::string& newTitle);
	void				introduce(void) const;
	void				learnSpell(ASpell* spell);
	void				forgetSpell(std::string spell);
	void				launchSpell(std::string spell, ATarget& target);

private:
	Warlock(void);
	std::string									_name;
	std::string									_title;
	std::map<std::string, ASpell*>				_spellBook;
	std::map<std::string, ASpell*>::iterator	_it;
};

#endif