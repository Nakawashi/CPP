# Objectifs

*Version 1.4*

## Ex00
Calculer la valeur du bitcoin d'apres une date. Utilisation du `container map`, de la `structure tm` et de la fonction `mktime()`.

## Ex01
Réaliser une calculatrice RPN (Reverse Polish Notation). RPN is a method to write a mathematical expression without round or square brackets. Developed in 1920 by Jan Lukasiewicz.

Besoin d'un contexte LIFO, j'ai choisi le container stack (sans container de précisé il s'appuiera sur deque).

## Ex02
Reproduire l'algorithme merge-insert de Ford-Johnson
Sources :
- [https://en.wikipedia.org/wiki/Merge-insertion_sort](https://en.wikipedia.org/wiki/Merge-insertion_sort)
- [https://codereview.stackexchange.com/questions/116367/ford-johnson-merge-insertion-sort](https://codereview.stackexchange.com/questions/116367/ford-johnson-merge-insertion-sort)

On va economiser le insert en ne comparant pas avec chaque nombre de la main liste.
Vu qu'on a fait des paires, qu'on les a chacunes triees pour avoir en first le plus petit des deux et en second le plus grand, on saura toujours qu'en inserant le first, il sera plus petit que son binome !!
Donc, on prend le nombre dans la pendingList, on va chercher son binome dans la main list (avec lower_bound qui nous retourne l'iterateur de la valeur cherchee) et on sait qu'on va pouvoir comparer et inserer en-dessous de cette valeur.
