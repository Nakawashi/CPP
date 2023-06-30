#ifndef BrickWall_HPP
# define BrickWall_HPP

# include <iostream>
# include "ASpell.hpp"

class BrickWall : public ATarget
{
public:
	BrickWall();
	~BrickWall();

	BrickWall*	clone() const;

private:
};

#endif