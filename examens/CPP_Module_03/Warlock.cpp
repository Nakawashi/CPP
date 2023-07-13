#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title)
: _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
}

void    Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

const std::string&  Warlock::getName() const
{
    return _name;
}

const std::string&  Warlock::getTitle() const
{
    return _title;
}

void    Warlock::setTitle(const std::string& title)
{
    _title = title;
}

void    Warlock::learnSpell(ASpell* spell)
{
    if (spell)
        _book[spell->getName()] = spell;
}

void    Warlock::forgetSpell(std::string spellName)
{
    _it = _book.find(spellName);
    if (_it != _book.end())
        _book.erase(_it);
}

void	Warlock::launchSpell(std::string spellName, ATarget& target)
{
    _it = _book.find(spellName);
    if (_it != _book.end())
        (_it->second)->launch(target);
}

