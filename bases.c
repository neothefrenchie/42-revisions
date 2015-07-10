/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloeung <aloeung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/15 23:07:28 by aloeung           #+#    #+#             */
/*   Updated: 2014/02/15 23:30:53 by aloeung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Quelques bases pour le C:
- Un programme contient forcement une fonction main (principale).
- Une fonction pas forcement.
- Nous avons droit a 5 variables maximum dans le corps d'une fonction
- Le prototype d'une fonction peut en contenir 4.

Quelques notes pour les prototypes:
- Il contient le type renvoye par la fonction et les parametres passes a
la fonction.

par ex : int	ft_example(int a, int b);
Cette fonction renvoie un int et prend pour parametre un int a et un int b.

par ex : void	ft_example(char a, char b);
Cette fonction ne renvoie rien (void = vide) et prend pour parametre un char a
et un char b.

Sur les types:
- un char est code sur 8 bits (1 octet) et peut contenir des valeurs comprises
entre -128 et 127.
- un unsigned char est egalement code sur 8 bits (1 octet) et peut contenir
uniquement des valeurs strictement positives, entre 0 et 255.
- un int est code sur 32 bits (4 octets) et peut contenir des valeurs comprises
entre -2,147,483,648 et 2,147,483,647.
N.B: un nombre non-signe (unsigned) est strictement positif. Pour les autres
types, http://en.wikipedia.org/wiki/Integer_%28computer_science%29

Un petit exemple de programme a decomposer:
//
#include <unistd.h>

void	ft_hello(void);

int		main(void)
{
	ft_hello();
	return (0);
}

void	ft_hello(void)
{
	write(1, "Hello\n", 6);
}
//

Ce petit programme contient deux fonctions, la fonction principale (main) et
la fonction ft_hello. Le prototype est marque avant la fonction main pour
pouvoir y faire appel directement sans avoir a ecrire ce que fait ce programme,
ca permet entre autre de rendre le code un peu plus lisible. Une autre maniere
de faire aurait ete d'ecrire toute la fonction hello puis ecrire le main. Dans
ce cas-la, declarer le prototype de la fonction hello est purement optionnel.

La fonction main renvoie un int, et ne prend ici pas de parametres et elle fait
appel a la fonction ft_hello puis renvoie 0 (qui est un int).
La fonction ft_hello ecrit sur la sortie standard 'Hello World' suivi d'un
retour a la ligne en faisant appel a l'appel systeme 'write'. Pour pouvoir y
faire appel, il est absolument necessaire d'inclure le header systeme unistd.h
(cf man 2 write).
