# Objectifs

*Héritage, version 6*

Merci a cette personne d'avoir réalisé ce wiki incroyable : [Wiki de qingqingqingli](https://github.com/qingqingqingli/CPP/tree/main/module03)

## Ex00
Création de la classe ClapTrap. Les membres sont : nom, HP, energie, atk dmg.

## Ex01
ScavTrap class creation : gate keeper special feature

## Ex02
FragTrap class creation : high five special feature

## Ex03
DiamondTrap class creation
Learning the *virtual* keyword


[qingqingqingli](https://github.com/qingqingqingli/CPP/wiki/Module03#the-diamond-problem)
[Wikipedia](https://en.wikipedia.org/wiki/Virtual_inheritance)
Virtual inheritance is a C++ technique that ensures only one copy of a base class's member variables are inherited by grandchild derived classes. Without virtual inheritance, if two classes B and C inherit from a class A, and a class D inherits from both B and C, then D will contain two copies of A's member variables: one via B, and one via C. These will be accessible independently, using scope resolution.

Instead, if classes B and C inherit virtually from class A, then objects of class D will contain only one set of the member variables from class A.