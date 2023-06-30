#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"

class SpellBook
{
public:
	SpellBook();
	~SpellBook();

	void	learnSpell(ASpell* spell);
	void	forgetSpell(const std::string& spellName);
	ASpell*	createSpell(const std::string& spellName);

private:
	SpellBook(const SpellBook& src);
	SpellBook&	operator=(const SpellBook& rhs);

	std::map<std::string, ASpell*>				_book;
	std::map<std::string, ASpell*>::iterator	_it;

};

#endif