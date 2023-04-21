/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:23:24 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/21 22:31:06 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

// inform the compiler that AMateria exists and is going to be instancied later. AMateria and ICharacter are inter-dependant. It resolves circular dependencies.
class ICharacter;

class AMateria
{
public:
	AMateria(void);
	AMateria(const std::string& type);
	AMateria(const AMateria &src);
	virtual ~AMateria(void);

	AMateria&			operator=(const AMateria& rhs);

	const std::string&	getType(void) const; // returns the materia type
	void				setType(const std::string& newType);
	virtual AMateria*	clone(void) const = 0;
	virtual void		use(ICharacter& target);

protected:
	std::string			_type;
};

#endif
