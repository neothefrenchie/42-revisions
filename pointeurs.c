/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeurs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloeung <aloeung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/16 00:08:05 by aloeung           #+#    #+#             */
/*   Updated: 2015/07/10 02:38:06 by aloeung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Un pointeur par definition pointe vers quelque chose.
Il ne faut JAMAIS laisser un pointeur sans l'initialiser !!!

Un exemple simple :
int		*a;

a est un pointeur vers un int.
Je ne peux donc pas lui affecter directement une valeur, cad :
a = 0; /* Cela n'est pas possible ! (je simplifie encore) */
En fait ici a renvoie l'adresse du pointeur a !

Pour affecter une valeur a l'int pointe par a, il faut donc invoquer la valeur
de type int pointe par a avec l'asterisque *.
*a = 0;

Aussi, un pointeur peut etre considere comme un tableau implicite.
char	*str;

str est un pointeur vers un char, mais peut egalement etre considere comme un
tableau de char et donc une chaine de caracteres!

Pour parcourir une chaine de caracteres avec les pointeurs, il suffit de
proceder comme ca :
while (*str != '\0')
	str++;				/* On passe a l'element suivant dans str */

ou
while (*str)
	str++;

ou avec un compteur i initialise a 0
while (str[i] != '\0')
	i++;

while (str[i])
	i++;

Passer l'adresse d'une variable permet de modifier cette meme variable dans une
sous fonction sans pour autant devoir a la renvoyer (retour implicite).
//

void	ft_change(int *a)
{
	*a = 42;
}

int		main(void)
{
	int	a;

	a = 0;
	ft_change(&a);
	return (0);
}

En pseudo code:
- Ici dans le main, je declare un int a que j'initialise a 0. Je passe l'adresse
de a dans la fonction ft_change pour pouvoir la modifier directement.
- On modifie a dans ft_change, en utilisant l'asterisque pour acceder a l'int
pointe par a. *a = 42;
- On revient dans le main, a vaut maintenant 42 !
