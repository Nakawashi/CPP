/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:55:37 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/21 20:03:01 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

# define A_SIZE 4

class Character : public ICharacter
{
public:
	Character(void);
	Character(const std::string& name);
	Character(const Character &src);
	virtual ~Character(void);

	Character &operator=(Character const &rhs);

	const std::string&	getName(void) const;
	void				setName(const std::string);

	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);

private:
	std::string			_name;
	AMateria*			_inventory[A_SIZE];
};

#endif