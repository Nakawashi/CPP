#ifndef DUMMY_HPP
# define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
	Dummy();
	~Dummy();

	Dummy*	clone() const;
};

#endif
