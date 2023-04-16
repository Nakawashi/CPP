#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
public:
	Animal(void);
	Animal(const Animal &src);
	virtual ~Animal(void);

	Animal&				operator=(const Animal& rhs);

	virtual std::string	getType(void) const;
	void				setType(std::string type);
	virtual void		makeSound(void) const;

protected:
	std::string	_type;
};

std::ostream&	operator<<(std::ostream& stream, const Animal &rhs);

#endif
