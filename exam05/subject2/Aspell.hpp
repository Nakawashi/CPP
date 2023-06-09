#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
public:
	ASpell(void);
	ASpell(const std::string& newName, const std::string& newEffect);
	ASpell(const ASpell& src);
	virtual ~ASpell(void);

	ASpell&				operator=(const ASpell& rhs);
	const std::string&	getName(void) const;
	const std::string&	getEffects(void) const;
	virtual ASpell*		clone(void) const = 0;
	void				launch(const ATarget& target) const;

protected:
	std::string	_name;
	std::string	_effects;
};

#endif
