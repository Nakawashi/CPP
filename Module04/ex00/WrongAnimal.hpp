/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:44:15 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/16 14:58:30 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &src);
	virtual ~WrongAnimal(void);

	WrongAnimal&		operator=(const WrongAnimal& rhs);

	std::string			getType(void) const;
	void				setType(std::string type);
	void				makeSound(void) const;

protected:
	std::string	_type;
};

std::ostream&	operator<<(std::ostream& stream, const WrongAnimal &rhs);

#endif
