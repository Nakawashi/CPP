#include "ASpell.hpp"

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
	if (this != &rhs)
	{
		_name = rhs.getName();
		_effects = rhs.getEffects();
	}
	return *this;
}

std::string		ASpell::getName() const
{
	return _name;
}

std::string		ASpell::getEffects() const
{
	return _effects;
}

void	ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}


