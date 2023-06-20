### References

Structure Time > https://cplusplus.com/reference/ctime/tm/

mktime > https://cplusplus.com/reference/ctime/mktime/?kw=mktime

data.csv est correcte, je n'ai qu'a fill ma map

Le check des input se fait sur le fichier recu.

## Process

1. Creation de deux objets ifstream (pour lire des données a partir d'un fichier entrant)
- Un pour le fichier de base de données
- Un pour l'input recu en argument

2. Verifier si j'ai bien deux arguments [nom du programme et nom de fichier] et si le fichier existe et peut s'ouvrir.

3. Creation d'un objet BitcoinExchange qui prend la database en paramètre

4. Faire la recherche et imprimer sur la sortie standard le resultat.
- Le constructeur va remplir un container map avec la date en `key` et le prix du btc a cette date en `value`.
- - Je lis la premiere ligne du fichier pour la skip
- - Je lis, ligne par ligne le fichier. Transforme chaque ligne (string) en flux (stringstream) afin de rediriger ce qui est lu dans differentes variables que je pourrai ainsi traiter par la suite.
- - J'utilie la structure tm pour y stocker l'annee, le mois, le jour
- - J'utilise la fonction mktime pour valider ce que contient tm. Retourne -1 si date invalide dans le calendrier, sinon retourne une valeur de type time_t. A cette etape je pars du principe que la DB est clean. `std::map<std::time_t, float>`

- Une fois la db dans map je fais le meme process de lire ligne par ligne et stocker les infos dans la structure tm pour l'input. Je fais les differentes verifications.
Si les donnees recues sont valides, alors je recherche une date. Si je trouve exactement la meme date `it->first == mktime(&time)` ou si j'ai un seul element dans ma db, je retourne it->second afin d'effectuer le calcul directement.
Si je n'ai pas exactement la date, je vais chercher la premiere date anterieure a mon input a l'aide de la methode `lower_bound` qui va me retourner l'element suivant. Je n'ai plus qu'a decrementer mon iterateur qui est un cran trop loin, et je retourne le second element.


