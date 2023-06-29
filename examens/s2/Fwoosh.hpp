#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include <iostream>
# include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:
	Fwoosh();
	Fwoosh(const Fwoosh& src);
	~Fwoosh();

	Fwoosh&	operator=(const Fwoosh& rhs);
	Fwoosh*	clone() const;

private:
};

#endif
