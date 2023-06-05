#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>

class Aspell
{
public:
	Aspell(const std::string& newName, const std::string& newTitle);
	Aspell(const Aspell& src);
	~Aspell(void);

	Aspell&			operator=(const Aspell& rhs);
	std::string&	getName(void) const;
	std::string&	getEffects(void) const;

protected:
	Aspell(void);
	std::string	_name;
	std::string	_effects;
};

#endif