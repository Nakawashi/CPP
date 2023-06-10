# Notation Polonaise Inversée
Notation mathématique qui constitue a inscrire les opérandes avant les opérateurs. Notation "post-fixée".

```
52 +			-->		5 + 2 = 7
3 8 * 7 3 - +		-->		(3 * 8) + (7 - 3) = 28
2 14 4 - 5 / 3 + *	-->		2 * (((14 - 4) / 5) + 3) = 10
```

Fonctionnement sur une pile (stack).
1. Parcourir l'expression, exemple : `3 8 * 7 3 - +`
2. Si on tombe sur une opérande, on l'ajoute à une pile.
```
8
3
```
3. Si on tombe sur un opérateur on dépile et on applique l'opération `*`
```
3 * 8
```
4. Le résultat de l'opération est injecté dans la pile.
```
3
7
24
```
5. On applique l'opérateur `-` sur 7 et 3
```
4
24
```
6. On applique l'opérateur `+` sur 24 et 4 et on obtient bien 28.

Source : [https://www.youtube.com/watch?v=S9ZaXZ5LAs8](https://www.youtube.com/watch?v=S9ZaXZ5LAs8)