/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:09:43 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/18 12:37:53 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(std::string type);
	Dog(const Dog &src);
	virtual ~Dog(void);

	Dog&		operator=(const Dog& rhs);

	std::string	getType(void) const;
	Brain*		getBrain(void) const;
	void		setType(std::string type);
	void		makeSound(void) const;

private:
	Brain*		_brain;
};

// std::ostream&	operator<<(std::ostream& stream, const Dog &rhs);

#endif
