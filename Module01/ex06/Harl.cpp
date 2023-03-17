#include "Harl.hpp"

Harl::Harl() {}

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
	std::cout << "[ DEBUG ]\n";
	std::cout << BOLDWHITE << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << NONE << std::endl;
}

void	Harl::_info(void) const
{
	std::cout << "[ INFO ]\n";
	std::cout << BLUE << "I cannot believe adding extra bacon costs more money. You didn\'t putenough bacon in my burger ! If you did, I wouldn\'t be asking for more !" << NONE << std::endl;
}

void	Harl::_warning(void) const
{
	std::cout << "[ WARNING ]\n";
	std::cout << YELLOW << "I think I deserve to have some extra bacon for free. I\'ve been comingfor years whereas you started working here since last month." << NONE << std::endl;
}

void	Harl::_error(void) const
{
	std::cout << "[ ERROR ]\n";
	std::cout << RED << "This is unacceptable ! I want to speak to the manager now." << NONE << std::endl;
}

void	Harl::complain(std::string level) const
{
	for (int i = 0; i < 4; i++)
	{
		if (level == _levels[i])
		{
			switch (i)
			{
				case 0:
					this->_debug();
				case 1:
					this->_info();
				case 2:
					this->_warning();
				case 3:
					this->_error();
				default:	// what to do if none of the case match
					std::cout << " [ Probably complaining about insignificant problems ]";
			}
		}
	}

}
