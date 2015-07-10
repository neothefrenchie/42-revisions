/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affectations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloeung <aloeung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/16 00:19:09 by aloeung           #+#    #+#             */
/*   Updated: 2015/07/10 02:34:53 by aloeung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Pour initialiser une variable n, ou lui affecter une valeur, la modifier, on
utilise le = !
n = 0;

Ici on affecte la valeur 0 a n. Maintenant que n a une valeur, on peut modifier
sa valeur.
n = n + 1;
(on ajoute 1 a la valeur courante de n, ici du coup, n = 1 !)

Il y a plusieurs manieres d'ecrire n = n + 1;
n++;
++n;
n += 1;

De même, toutes ces affectations sont equivalentes (je simplifie volontairement) :
n = n - 1;
--n;
n--;
n -= 1;

n = n * 1;
n *= 1;

n = n / 1;
n /= 1;

n = n % 1;
n %= 1;




Précisions supplémentaires : POST et PRE dé/in crémentation

- une préincrémentation avec a = 'a'

					<- a vaut 'a'
ft_putchar(++a);	<- avant l'appel à putchar l'incrémentation est effectuée (on a = a + 1; puis ft_putchar (a);)
					<- a vaut 'b'

et lors de l'appel on obtiendra en résultat : b


- une post décrémentation avec a = 'a'

					<- a vaut 'a'
ft_putchar(a++);	<- on appelle ft_putchar puis on incrémente (ici ft_putchar(a); puis a = a + 1;)
					<- a vaut ici 'b'


Cela fonctionne de la même façon pour les décrémentations !
