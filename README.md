# 6.Push_swap

Second project of 42's algorithm branch, Push_swap is a project in which your goal is to sort an integer stack using only another stack and a limited set of moves.

How to use the program :

- make

- ./push_swap <...> | ./checker <...>
	ex :	./push_swap 2 1 3 6 5 8 | ./checker 2 1 3 6 5 8
			ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l			// compte le nombre de move
			ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG	// verifie si l'algo est valide

Script.sh :

- sh tools/script.sh

- size of the stack to generate
	"How many range of number [from ... to] (2 number needed) : x y"

- Number of tests

- Move limit

checker_judumay : (https://github.com/ChokMania)

- Same as checker, simply add -v to get a visual

Scale :

For 100 values : 700 moves = excellent, for 500 : 5500 moves = excellent

==========

Deuxième projet de la branche algo de 42, Push_swap est un projet qui consiste à trier une pile d'entier à l'aide d'une seconde pile et d'un set limité de moves.

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

Pour 100 valeurs : 700 moves = excellent, pour 500 : 5500 moves = excellent
