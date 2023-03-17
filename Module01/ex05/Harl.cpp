#include "Harl.hpp"

Harl::Harl()
{
		_funcs[0] = &Harl::_debug;
		_funcs[1] = &Harl::_info;
		_funcs[2] = &Harl::_warning;
		_funcs[3] = &Harl::_error;
}

Harl::~Harl(void) {}

std::string Harl::_levels[4] =
{
	"debug",
	"info",
	"warning",
	"error"
};

void	Harl::_debug(void) const
{
	std::cout << BOLDWHITE << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << NONE << std::endl;
}

void	Harl::_info(void) const
{
	std::cout << BLUE << "I cannot believe adding extra bacon costs more money. You didn\'t putenough bacon in my burger ! If you did, I wouldn\'t be asking for more !" << NONE << std::endl;
}

void	Harl::_warning(void) const
{
	std::cout << YELLOW << "I think I deserve to have some extra bacon for free. I\'ve been comingfor years whereas you started working here since last month." << NONE << std::endl;
}

void	Harl::_error(void) const
{
	std::cout << RED << "This is unacceptable ! I want to speak to the manager now." << NONE << std::endl;
}

void	Harl::complain(std::string level) const
{
	for (int i = 0; i < 4; i++)
	{
		if (level == this->_levels[i])
			(this->*_funcs[i])();	//call the function pointed by the i-th element of the _funcs array
	}

}
