# 6.Push_swap

Deuxième projet de la branche algo de 42, Push_swap est un projet qui consiste à trier une pile d'entier à l'aide d'une seconde pile et d'un set limité de move.

Le programme s'utilise de la sorte :

- make

- ./push_swap <...> | ./checker <...>
	ex :	./push_swap 2 1 3 6 5 8 | ./checker 2 1 3 6 5 8
			ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l			// compte le nombre de move
			ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG	// verifie si l'algo est valide

Utilisation de script.sh :

- sh script.sh

- Taille de la pile à générer
	"How many range of number [from ... to] (2 number needed) : x y"

- Nombre de tests à effectuer

- Limite de move à définir

Utilisation de checker_judumay : (https://github.com/ChokMania)

- S'utilise de la même facon que checker, simplement rajouter -v pour avoir un apercu

Echelle :

Pour 100 valeurs : 700 moves = excellent
Pour 500 valeurs : 5500 moves = excellent
