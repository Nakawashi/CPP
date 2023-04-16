/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:30:27 by lgenevey          #+#    #+#             */
/*   Updated: 2023/04/16 19:57:08 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define A_SIZE 100

# include <iostream>

class Brain
{
public:
	Brain(void);
	Brain(const Brain &src);
	~Brain(void);

	Brain&				operator=(const Brain& rhs);
	Brain*				clone(void) const;
	const std::string*	getIdeasArray(void) const;
	const std::string	getIdea(size_t i) const;
	void				setIdea(size_t i, std::string idea);

protected:
	std::string	_ideas[A_SIZE];
};

#endif
