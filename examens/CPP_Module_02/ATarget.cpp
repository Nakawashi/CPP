#include "ATarget.hpp"

ATarget::ATarget(std::string type)
: _type(type){}

ATarget::ATarget(const ATarget& src)
: _type(src._type)
{
	*this = src;
}

ATarget::~ATarget() {}

ATarget&	ATarget::operator=(const ATarget& rhs)
{
	if (this != &rhs)
		_type = getType();
	return *this;
}

const std::string&	ATarget::getType() const
{
	return _type;
}

void	ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}

