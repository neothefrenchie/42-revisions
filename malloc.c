/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloeung <aloeung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/16 00:36:14 by aloeung           #+#    #+#             */
/*   Updated: 2014/02/16 00:49:03 by aloeung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Pour pouvoir allouer de la memoire avec malloc si on suit la norme, on procede
comme ca. (sans oublier l'include stdlib.h)

Pour un pointeur sur int de taille deux !
int		*tableau;

tableau = NULL; /* On initialise le pointeur, OBLIGATOIRE ! */
tableau = (int *)malloc(sizeof(*tableau) * 2);

Ici on caste en premier le type de malloc, donc (int *), on appelle malloc et
et on lui donne la taille a allouer avec sizeof, cette fonction est utile pour
lui donner la bonne taille a allouer grace au type. tableau est un tableau
implicite d'int. Ce qui veut dire que dans tableau, on a des valeurs int !
sizeof(*tableau) ou sizeof(int) renvoie donc la taille d'un int ! (4 octets)

Cas speciaux : pour les chaines de caracteres
char	*str;

str = NULL;
str = (char *)malloc(sizeof(*str) * (4 + 1));
str[0] = 'H';
str[1] = 'i';
str[2] = '!'
str[3] = '\n';
srt[4] = '\0''

Ici pour la chaine "Hi!\n", nous avons donc une chaine de longueur 4 ! Comme
indique dans la partie ou j'alloue de la memoire je lui ai passe la longueur
de la chaine auquel j'ai additionne 1, pourquoi ? Car une chaine de caracteres
se termine TOUJOURS par un '\0', il faut donc toujours le prendre en compte !

Lorsque l'on veut liberer l'espace memoire occupe par str, on procede de la
sorte :
int		i;

i = 0;
while (str[i])		/* Cette partie est necessaire pour effacer */
	str[i++] = 0;	/* les differents char dans str */
free(str);
str = NULL;			/* Il faut absolument remettre le pointeur vers NULL */
					/* car sinon on risque des erreurs ! */
