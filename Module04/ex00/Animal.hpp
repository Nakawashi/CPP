#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
public:
	//Coplien//
	Animal(void);
	Animal(const Animal &src);
	~Animal(void);
	Animal&	operator=(const Animal& rhs);
	//Coplien//

	//Getters//
	std::string	get_type(void) const;
	//Getters//

	//Setters//
	void	set_type(std::string type);
	//Setters//


protected:
	std::string	_type;
};

std::ostream&	operator<<(std::ostream& stream, const Animal &rhs);

#endif
