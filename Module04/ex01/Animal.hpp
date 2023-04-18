/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:41:18 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/18 11:22:48 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal &src);
	virtual ~Animal(void); // avoid leaks

	Animal&				operator=(const Animal& rhs);

	virtual std::string	getType(void) const;		// virtual allow sub-classes to override those methods
	virtual void		setType(std::string type);
	virtual void		makeSound(void) const;

protected:
	std::string	_type;
};

std::ostream&	operator<<(std::ostream& stream, const Animal &rhs);

#endif
