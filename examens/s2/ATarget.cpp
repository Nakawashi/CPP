#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string type)
: _type(type) {}

ATarget::ATarget(const ATarget& src)
: _type(src._type) {}

ATarget::~ATarget() {}

ATarget&	ATarget::operator=(const ATarget& rhs)
{
	if (this == &rhs)
		return *this;
	this->_type = rhs.getType();
	return *this;
}

const std::string&	ATarget::getType() const
{
	return _type;
}

void	ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << std::endl;
}
