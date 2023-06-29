#include "Dummy.hpp"

Dummy::Dummy()
: ATarget("Target practice Dummy") {}

Dummy::~Dummy() {}

Dummy*	Dummy::clone() const
{
	return new Dummy();
}
