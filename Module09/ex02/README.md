### Process

1. Verifications de l'input :
	- Que des valeurs positives
	- Pas de doublons

2. Inserer les elements dans le container [OK]

3. Faire des paires [OK]
	- sort "deux par deux" pour avoir le plus petit des deux devant

3. prendre le plus grand de la paire et inserer dans nouveau container du meme type et sort une fois ok [OK]

4. On prend le premier (le plus petit des plus grands), on vient chercher son binome et on le met devant lui. [OK]

5. A l'aide d'un binary search algorithm (lower_bound) on vient chercher les valeurs restantes pour les inserer directement au bon endroit

=> on a deux list : une pour receptionner les valeurs, l'autre sert a trier
=> attention segfault si j'ai un seul element [OK gestion d'erreurs d'arguments]
