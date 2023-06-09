#include "Warlock.hpp"
#include <iostream>

/**
 * Coplien
*/
Warlock::Warlock(const std::string& newName, const std::string& newTitle)
: _name(newName), _title(newTitle)
{
	std::cout << this->_name << ": This looks like another boring day" << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

const std::string&	Warlock::getName(void) const
{
	return this->_name;
}

const std::string&	Warlock::getTitle(void) const
{
	return this->_title;
}

void	Warlock::setTitle(const std::string& newTitle)
{
	this->_title = newTitle;
}


void	Warlock::introduce(void) const
{
	std::cout
		<< this->_name
		<< ": I am "
		<< this->_name
		<< ", "
		<< this->_title
		<< std::endl;
}

void	Warlock::learnSpell(ASpell* spell)
{
	if (spell)
		_spellBook[spell->getName()] = spell;
}

void	Warlock::forgetSpell(std::string spell)
{
	_it = _spellBook.find(spell);
	if (_it != _spellBook.end())
		_spellBook.erase(_it);
}

void	Warlock::launchSpell(std::string spell, ATarget& target)
{
	_it = _spellBook.find(spell);
	std::cout << "taille spellBook : " << _spellBook.size() << std::endl;

	if (_it != _spellBook.end())
	{
		std::cout << "_it->first : " << _it->first << std::endl;
		std::cout << "_it->second : " << _it->second << std::endl;
		(_it->second)->launch(target);
	}
	// if (_spellBook.find(spell) != _spellBook.end())
	// 	_spellBook[spell]->launch(target);
}

