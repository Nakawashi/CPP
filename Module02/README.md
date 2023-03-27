# Objectifs

Merci a cette personne d'avoir réalisé ce wiki incroyable : [Wiki de qingqingqingli](https://github.com/qingqingqingli/CPP/tree/main/module02)

*Polymorphisme ad-hoc, surcharge d’opérateurs et forme canonique*

## Nouvelle consigne :

Les classes doivent être conformes à la forme canonique de Coplien.
Donc doivent comporter les quatre fonctions suivantes :
- Constructeur par défaut
- Constructeur de recopie (fais une copie d'une instance deja cree)
- Opérateur d'affectation (modifier l'instance courante avec +)
- Destructeur (virtual, pour quand je verrai cette notion)

Je peux ajouter une fonction de redirection de flux vers la sortie std
Une fonction membre qui permet de serialiser notre classe vers une string

[qingqingqingli sur les differents operateurs](https://github.com/qingqingqingli/CPP/wiki/Module02#operator-overload)

--

### Representation des nombres en virgule fixe.
*Ces nombres sont largement utilisés dans l’imagerie numérique, le domaine du son ou la programmation scientifique, pour n’en citer que trois.*
Les nombres a virgule fixe ne sont pas natifs au C++, c'est a nous de les ajouter.
Parfois on cherche la performance, pas la precision. L'arithmétique en virgule fixe est beaucoup plus rapide que l'arithmétique en virgule flottante.
[Article de Berkeley fournie dans le module](https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html)

Pour definir un fixed point on a besoin :
- largeur du nombre (combien de bits forment le nombre)
- position du point, en partant de la droite (si c'est 3, on sait qu'on a trois valeurs a droite du point).
Notation : fixed(w, b) ou w est le nb de bits utilises (width of a number) et b est la position du binary point depuis le bit le moins significatif.
Exemple rapide : fixed(8, 3)

| 0 | 0 | 0 | 1 | 0 | 1 | 1 | 0 |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|


represente 00010.110
= 1 * 2<sup>1</sup> + 1 * 2<sup>-1</sup> + 1 * <sup>-2</sup>
= 2 + 0.5 + 0.25
= 2.75

The disadvantage of fixed point number, is than of course the loss of range and precision when compare with floating point number representations. For example, in a fixed<8,1> representation, our fractional part is only precise to a quantum of 0.5. We cannot represent number like 0.75. We can represent 0.75 with fixed<8,2>, but then we loose range on the integer part.

### Nombres negatifs
1. Complement a deux
2. premier bit pour le signe
3. x suivants pour l'exposant
4. le reste pour la mantisse

## Ex00
Mise en pratique de la forme canonique (de Coplien)

## Ex01
Grace aux nombres a virgules fixes on peut convertir un int en nombre a virgule et retrouver le int initial sans perdre sa valeur.
L'attribut _rawBits de ma classe Fixed va stocker les nombres a virgules fixes.
L'attribut _fractional_bits correspond au nombre de bits qu'on veut allouer pour le point, c'est l'exposant des puissances de 2 permettant de decaler les bits.

### Constructeurs
- Constructeur par defaut : initialise _rawBits a 0 comme demandé
- Constructeur de copie comme demandé pour le Coplien
- Constructeur qui prend un entier en parametre pour le convertir en nombre a virgule fixe et le stocker dans _rawBits. Exemple : on donne '42' en parametre, on le converti en binaire, on ajoute 8 zeros a la droite. C'est ce que fait le bitshifting : ajouter 8 zeros a la suite, ou faire 42 * 2^8.
- Constructeur qui prend un float en parametre pour le convertir en nombre a virgule fixe et le stocker dans _rawBits. Exemple : On donne 42.42 en parametre,



## Ex02
Surcharge d'opérateurs : arithmetiques, de comparaison, de flux de sortie ainsi que deux fonctions statiques (non dependantes d'une instance) pour trouver la valeur min ou max entre deux Fixed.

Si on peut ecrire juste une instance c'est grace a l'operateur <<.
