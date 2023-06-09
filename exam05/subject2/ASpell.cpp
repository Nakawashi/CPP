#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const std::string& newName, const std::string& newEffect)
: _name(newName), _effects(newEffect) {}

ASpell::ASpell(const ASpell& src)
: _name(src._name), _effects(src._effects) {}

ASpell::~ASpell() {}

ASpell& ASpell::operator=(const ASpell& rhs)
{
	_name = rhs.getName();
	_effects = rhs.getEffects();
	return *this;
}

const std::string&	ASpell::getName(void) const
{
	return _name;
}

const std::string&	ASpell::getEffects(void) const
{
	return _effects;
}

void	ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}


