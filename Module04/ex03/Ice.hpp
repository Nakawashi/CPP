/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:54:47 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/18 20:54:48 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include "AMateria.hpp"

class Ice
{
public:
	Ice(void);
	Ice(const Ice& src);
	virtual ~Ice(void);

	Ice&	operator=(const Ice& rhs);

	Ice*	clone(void) const;
};

#endif