/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:41:18 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/17 18:11:48 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
public:
	AAnimal(void);
	AAnimal(const AAnimal &src);
	virtual ~AAnimal(void); // avoid leaks

	AAnimal&				operator=(const AAnimal& rhs);

	virtual std::string	getType(void) const;		// virtual allow sub-classes to override those methods
	virtual void		setType(std::string type);
	virtual void		makeSound(void) const = 0;

protected:
	std::string	_type;
};

std::ostream&	operator<<(std::ostream& stream, const AAnimal &rhs);

#endif
