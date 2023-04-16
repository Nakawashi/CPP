/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:45:38 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/16 14:51:49 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(std::string type);
	WrongCat(const WrongCat &src);
	~WrongCat(void);

	WrongCat&		operator=(const WrongCat& rhs);

	std::string		getType(void) const;
	void			setType(std::string type);
	void			makeSound(void) const;

protected:
	std::string	_type;
};

std::ostream&	operator<<(std::ostream& stream, const WrongCat &rhs);

#endif
