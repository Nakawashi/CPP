#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{

public:
	Weapon(std::string type);
	~Weapon(void);

	std::string	getType(void) const;
	void		setType(std::string type);

private:
	Weapon(void);
	std::string 		_type;

};

#endif
