#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
public:
	ATarget(const std::string& newType);
	ATarget(const ATarget& src);
	virtual ~ATarget(void);

	ATarget&			operator=(const ATarget& rhs);
	const std::string&	getType(void) const;
	virtual ATarget		*clone(void) const = 0;
	void				getHitBySpell(const ASpell& spell) const;

protected:
	std::string	_type;
};

#endif