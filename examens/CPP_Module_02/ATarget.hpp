#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
public:
	ATarget(std::string type);
	ATarget(const ATarget& src);
	~ATarget();

	ATarget&	operator=(const ATarget& rhs);

	const std::string&	getType() const;
	virtual ATarget*	clone() const = 0;

	void				getHitBySpell(const ASpell& spell) const;

protected:
	ATarget();

	std::string	_type;

};

#endif