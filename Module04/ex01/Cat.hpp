/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:09:38 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/17 16:20:49 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(std::string type);
	Cat(const Cat &src);
	virtual ~Cat(void);

	Cat&		operator=(const Cat& rhs);

	std::string	getType(void) const;
	Brain*		getBrain(void) const;
	void		setType(std::string type);
	void		makeSound(void) const;

protected:
	std::string	_type;

private:
	Brain*		_brain;
};

std::ostream&	operator<<(std::ostream& stream, const Cat &rhs);

#endif
