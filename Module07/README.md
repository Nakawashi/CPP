# Objectifs

*Templates, version 6*

Merci a cette personne d'avoir réalisé ce wiki incroyable : [Wiki de qingqingqingli](https://github.com/qingqingqingli/CPP/tree/main/module07)


## Ex00
Création de trois fonctions templates qui prennent le même type et ce type doit supporter les opérateurs de comparaison.

## Ex01
Création d'une fonction template prenant trois paramètres. Le premier est un tableau, de n'importe quel type, le second est sa taille, le troisième est une fonction qui s'appéliquera sur chaque élément du tableau (foreach)

## Ex02
Problème de compréhension : les attributs privés de la classe Array sont la taille du tableau (le nombre d'éléments qu'il contiendra) et un pointeur de type générique que je considère comme mon tableau qui sera remplit de ce type-là.

Pourquoi je dois écrire new T[n] pour créer sur la heap un nouveau tableau de type T comportant n éléments, et pas new Array<T>[n] ?

new Array<T>[n] serait utilisé si je voulais allouer un tableau d'objets de type Array<T>. Cela créerait n objets de type Array<T>, pas des objets de type T. Dans le cas de l'exercice je veux stocker des éléments de type T dans l'array, donc il faut écrire new T[n] pour allouer l'espace mémoire approprié.
