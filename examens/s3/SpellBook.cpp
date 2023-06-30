#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
	for (_it = _book.begin(); _it != _book.end(); ++_it)
	{
		delete _it->second;
	}
	_book.clear();
}

void	SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		_book.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void	SpellBook::forgetSpell(const std::string& spellName)
{
	_it = _book.find(spellName);
	if (_it != _book.end())
	{
		delete _it->second;
		_book.erase(spellName);
	}
}

ASpell*	SpellBook::createSpell(const std::string& spellName)
{
	_it = _book.find(spellName);
	if (_it != _book.end())
		return _book[spellName];
	return NULL;
}
