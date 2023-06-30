#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string name, std::string effects)
: _name(name), _effects(effects) {}

ASpell::ASpell(const ASpell& src)
: _name(src._name), _effects(src._effects)
{
	*this = src;
}

ASpell::~ASpell() {}

ASpell&	ASpell::operator=(const ASpell& rhs)
{
	if (this == &rhs)
		return *this;
	this->_name = rhs.getName();
	this->_effects = rhs.getEffects();
	return *this;
}

const std::string&	ASpell::getName() const
{
	return _name;
}

const std::string&	ASpell::getEffects() const
{
	return _effects;
}

void	ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}

