/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operateurs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloeung <aloeung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/16 00:29:01 by aloeung           #+#    #+#             */
/*   Updated: 2014/02/16 00:33:42 by aloeung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

< Inferieur
<= Inferieur ou egal
> Superieur
>= Superieur ou egal
== Egal
!= Different

&& ET logique
|| OU logique

Exemple :
if (s > 0 && s < 32)
On verifie si s est compris entre 0 et 32, en maths cela donnerait :
0 < s < 32
Cela veut donc dire que les deux conditions DOIVENT etre verifiees !

if (s == 0 || s == 32)
On verifie si s est egal a 0 ou a 32. Cela veut dire qu'une seule condition peut
etre verifie. SOIT s = 0, SOIT s = 32 mais pas les deux a la fois !
