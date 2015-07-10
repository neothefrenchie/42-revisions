/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableaux.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloeung <aloeung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/15 23:56:41 by aloeung           #+#    #+#             */
/*   Updated: 2014/02/16 00:07:59 by aloeung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Un tableau a un type et contient plusieurs elements du meme type.
Par exemple un tableau de char ne contient que des elements de type char.
Un tableau d'int ne contient que des elements de type int. Etc, etc.

On declare un tableau avec deux int de cette maniere :
int		tab[2];

Pour faire appels aux differents int de ce tableau :
tab[0]
tab[1]

En general, on considere qu'un tableau de char est une chaine de caracteres. Ce
qui implique qu'a la derniere position de ce tableau, on doit forcement avoir un
'\0' et ceci est obligatoire ! Et nous permet entre autres de parcourir cette
chaine de caracteres grace a la condition d'arret suivante, si le dernier char
est un '\0' !
Par exemple pour la chaine de caracteres "Hi!\n" :
int		i;
char	tab[5];

i = 0;
tab[0] = 'H';
tab[1] = 'i';
tab[2] = '!';
tab[3] = '\n';
tab[4] = '\0';

Pour parcourir cette chaine (valide), on peut proceder avec une boucle while
while (tab[i] != '\0')
	i++;

On peut faire aussi de cette maniere et pour tout tableau de type char:
while (tab[i])
	i++;
On parcourt le tableau tab tant qu'il est valide.

Pour tous les autres types de tableaux, il est necessaire de connaitre la taille du tableau !
exemple un tableau d'int de taille 4.
i = 0;
size = 4;
while (i < size)
	i++;
