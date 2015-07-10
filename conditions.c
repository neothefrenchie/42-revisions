/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloeung <aloeung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/15 23:31:03 by aloeung           #+#    #+#             */
/*   Updated: 2015/07/10 02:36:13 by aloeung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Pour verifier une condition, il y a plusieurs manieres.

Par exemple, pour une fonction qui renvoie 1 si un nombre passe en parametre
est negatif et 0 si le nombre est strictement positif (donc superieur ou egal a
0)

int		ft_isnegative(int n)
{
	if (n < 0)			/* On verifie si le nombre n est negatif */
		return (1);
	else				/* else = sinon, donc un nombre non negatif */
		return (0);		/* ce qui implique un nombre strictement positif */
}

En pseudo code, etape par etape cela donne :
- J'ai fait appel a une fonction ft_isnegative et qui prend pour parametre un
int n quelconque.
- Je verifie SI n est inferieur a 0 avec if, si c'est le cas, je renvoie 1.
- Si le nombre n'est pas negatif (else), alors je renvoie 0.
- Dans la partie else (sinon), on ecrit pas la condition car celle-ci est
tout de meme implicite. Dans quel cas, un nombre n'est pas negatif ? Uniquement
quand il est strictement positif ! D'ou le sinon (else)

Si par exemple, il y a plusieurs conditions, il faudra utiliser un else if.
if (n < 0)
else if (n == 0)
else if (n == 1)
etc etc

Dans ce cas, on ne verifie que si n < 0 ou si n est egal a 0 ou à 1.

//
Il est possible d'utiliser un operateur ternaire (uniquement pour une
affectation) pour compacter le code lorsque l'on a une condition if suivi de
la condition else.

Exemple:
int		ft_isnegative(int n)
{
	char	c;

	c = (n < 0 ? 1 : 0);
	return (c);
}

Que fait-on ici ? On verifie si n < 0 (if), si c'est le cas c = 1, sinon (else)
c = 0. Puis on retourne la valeur de c.

On peut aussi l'ecrire aussi de cette maniere :
c = 0 + (n < 0);

Ce qui veut dire, qu'on affecte a c la valeur 0 a laquelle on additionera 1 si
et si uniquement n est inferieur a 0. Dans ce cas-la, l'operateur ternaire vaut
1 si la condition est vraie, ou 0 si la condition est fausse !

//

Les boucles :
On utilisera exclusivement while (ou la recursivite).

Une boucle standard pour afficher l'alphabet.
//
#include <unistd.h>

int			main(void)
{
	char	c;

	c = 'A';
	while (c <= 'Z')
	{
		write (1, &c, 1);
		++c;
	}
	return (0);
}
//

En pseudo code:
- Je declare une variable c de type char puis je l'initialise avec la valeur
ascii de la lettre A. Comment ? Avec les guillemets simples ! 'A' = 65 si on
considere uniquement les valeurs. Pour verifier : man ascii.
- Puis je verifie le statut de la variable c grace a une boucle while, ici on
executera le contenu de la boucle TANT QUE (en anglais while) la variable c
sera inferieure ou egale a la valeur ascii de Z (soit 90).
- Dans la boucle, on affichera la lettre courante sur la sortie standard puis on
incremente c (grace ++c ou c++). La difference entre ces deux incrementations ?
Pour ++c, on incremente d'abord et on execute ce qu'il vient apres.
Pour c++, on incremente apres avoir executer ce dans quoi on y a fait appel.
- Des qu'on arrive a la lettre Z, on arrete le programme.
