#include "ASpell.hpp"
#include "ATarget.hpp"
#include <iostream>

ATarget::ATarget() {}

ATarget::ATarget(const std::string& newType)
: _type(newType) {}

ATarget::ATarget(const ATarget& src)
: _type(src.getType()) {}

ATarget::~ATarget() {}

ATarget& ATarget::operator=(const ATarget& rhs)
{
	_type = rhs.getType();
	return *this;
}

const std::string&	ATarget::getType(void) const
{
	return this->_type;
}

void	ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
}

