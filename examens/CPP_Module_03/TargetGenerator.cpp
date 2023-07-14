#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator()
{
	for (_it = _targets.begin(); _it != _targets.end(); ++_it)
	{
		delete _it->second;
	}
	_targets.clear();
}

void		TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		_targets[target->getType()] = target->clone();
}

void		TargetGenerator::orgetTargetType(const std::string& targetName)
{
	_it = _targets.find(targetName);
	if (_it != _targets.end())
	{
		delete _it->second;
		_targets.erase(_it->first);
	}
}

ATarget*	TargetGenerator::createTarget(const std::string targetName)
{
	_it = _targets.find(targetName);
	if (_it != _targets.end())
		return _targets[targetName];
	return NULL;
}

