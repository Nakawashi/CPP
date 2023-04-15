#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
public:
	//Coplien//
	Cat(void);
	Cat(std::string type);
	Cat(const Cat &src);
	~Cat(void);
	Cat&	operator=(const Cat& rhs);
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

std::ostream&	operator<<(std::ostream& stream, const Cat &rhs);

#endif
