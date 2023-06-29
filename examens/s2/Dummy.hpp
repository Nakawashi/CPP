#ifndef DUMMY_HPP
# define DUMMY_HPP

# include <iostream>
# include "ASpell.hpp"

class Dummy : public ATarget
{
public:
	Dummy();
	Dummy(const Dummy& src);
	~Dummy();

	Dummy&	operator=(const Dummy& rhs);
	Dummy*	clone() const;

private:
};

#endif
