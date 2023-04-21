/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 21:34:43 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/21 22:28:46 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &src);
	virtual ~MateriaSource(void);

	MateriaSource&	operator=(const MateriaSource& rhs);

	virtual void		learnMateria(AMateria* materia);
	virtual AMateria*	createMateria(std::string const& type);

private:
	static const int	_nbMaterials = 4;
	AMateria*			_materias[_nbMaterials];
};

#endif
