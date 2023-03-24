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

## Ex00

Representation des nombres en virgule fixe.
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

Question comme ca : comment differencier 10110 et 10.110 ?

The disadvantage of fixed point number, is than of course the loss of range and precision when compare with floating point number representations. For example, in a fixed<8,1> representation, our fractional part is only precise to a quantum of 0.5. We cannot represent number like 0.75. We can represent 0.75 with fixed<8,2>, but then we loose range on the integer part.

### Nombres negatifs


## Ex01

## Ex02


## Ex03

