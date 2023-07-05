#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
	ATarget();
	ATarget(std::string type);
	ATarget(const ATarget& src);
	~ATarget();

	ATarget&	operator=(const ATarget& rhs);

	const std::string&	getType() const;
	virtual ASpell*		clone() const = 0;

	void				getHitBySpell(const ASpell& spell) const;

protected:
	std::string	_type;
};

#endif
