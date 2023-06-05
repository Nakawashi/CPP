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
