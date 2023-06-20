### References

Structure Time > https://cplusplus.com/reference/ctime/tm/

mktime > https://cplusplus.com/reference/ctime/mktime/?kw=mktime

data.csv est correcte, je n'ai qu'a fill ma map

Le check des input se fait sur le fichier recu.

## Process

1. Creation de deux objets ifstream (opere sur des fichiers entrants)
- Un pour le fichier de base de données
- Un pour l'input recu en argument

2. Verifier si j'ai bien deux arguments [nom du programme et nom de fichier] et si le fichier existe et peut s'ouvrir.

3. Creation d'un objet BitcoinExchange qui prend la database en paramètre

4. Faire la recherche et imprimer sur la sortie standard le resultat.


