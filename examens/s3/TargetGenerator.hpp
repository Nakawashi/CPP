#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include "ATarget.hpp"
# include <map>

class TargetGenerator
{
public:
	TargetGenerator();
	~TargetGenerator();

	void		learnTargetType(ATarget* target);
	void		forgetTargetType(const std::string& targetName);
	ATarget*	createTarget(const std::string& targetName);

private:
	TargetGenerator(const TargetGenerator& src);
	TargetGenerator&	operator=(const TargetGenerator& rhs);

	std::map<std::string, ATarget*>				_targets;
	std::map<std::string, ATarget*>::iterator	_it;
};

#endif
