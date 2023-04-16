/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:09:43 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/16 14:20:58 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(std::string type);
	Dog(const Dog &src);
	~Dog(void);

	Dog&		operator=(const Dog& rhs);

	std::string	getType(void) const;
	void		setType(std::string type);
	void		makeSound(void) const;

protected:
	std::string	_type;
};

std::ostream&	operator<<(std::ostream& stream, const Dog &rhs);

#endif
