# Objectifs

*Casts C++, version 5*

Merci a cette personne d'avoir réalisé ce wiki incroyable : [Wiki de qingqingqingli](https://github.com/qingqingqingli/CPP/tree/main/module06)

Consigne supplémentaire : Pour chaque exercice, la convertion de type devra être résolue en utilisant un type de cast spécifique. Choix évalué en soutenance.

## Ex00
Limits : [Doc MS des limites](https://learn.microsoft.com/en-us/cpp/c-language/cpp-integer-limits?view=msvc-170)

Conversion scalaire.

Type scalaire = type de base : char, int, float, double.

Conversion utilisée : `static_cast`.

## Ex01
Sérialisation : processus de conversion d'un objet en une séquence d'octets qui peut être stockée ou transmise via un réseau, puis la conversion inverse pour reconstruire l'objet à partir de la séquence d'octets. Si un objet est sérialisé en un tableau d'octets et stocké sur un disque dur, il peut être récupéré plus tard et converti en un objet de son type d'origine à l'aide d'un cast.

uintptr_t : type integer non signé assez grand pour contenir n'importe quel pointeur. En gros, il permet de stocker des données, de les manipuler, afin de pouvoir les caster à nouveau dans leur type d'origine, sans perte car ultra général, comme le void*.

Conversion utilisée : `reinterpret_cast`.

## Ex02
Conversion utilisée : `dynamic_cast`.
