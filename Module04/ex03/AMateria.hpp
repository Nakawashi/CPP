/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:23:24 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/18 16:34:15 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
// # include "ICharacter.hpp"

class AMateria
{
public:
	AMateria(void); // dont want the user to use it, and no need to define it in .cpp
	AMateria(const std::string& type);
	AMateria(const AMateria &src);
	virtual ~AMateria(void);

	AMateria&			operator=(const AMateria& rhs);

	const std::string&	getType(void) const; // returns the materia type
	void				setType(const std::string& newType);
	virtual AMateria*	clone(void) const = 0;
	// virtual void		use(ICharacter& target);

protected:
	std::string			_type;
};


#endif
