#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include "colors.hpp"

class Harl
{

public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level) const;

private:

	void	_debug(void) const;
	void	_info(void) const;
	void	_warning(void) const;
	void	_error(void) const;

	static std::string	_levels[4];

	// douille de Jerome permettant d'init mon tableau de pointeur sur fonctions membres dans la classe
	typedef void (Harl::*ptr_funcs)(void) const;
	ptr_funcs _funcs[4];

};

#endif
