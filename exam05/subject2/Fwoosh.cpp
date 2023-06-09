#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void)
: ASpell("Fwoosh", "Fwooshed") {}

Fwoosh::~Fwoosh(void) {}

ASpell*	Fwoosh::clone(void) const
{
	return new Fwoosh();
}
