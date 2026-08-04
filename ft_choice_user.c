/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choice_user.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 00:08:25 by romasant          #+#    #+#             */
/*   Updated: 2026/08/04 15:39:13 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_choice_user(int nb_random, int life, int nb_try)
{
	char	buff[10];
	int	(nb_user) = 0;
	int	(check_life) = 0;
	int (i) = 0;

	ft_putstr("Ta proposition : ");
	while (i < 10)
	{
		buff[i] = '\0';
		i++;
	}
	read(0, buff, 10);
	nb_user = atoi(buff);
	if (nb_user > nb_random)
	{
		ft_putstr("Plus petit ! Il te reste ");
		ft_putnbr(life - 1);
		ft_putstr(" vies.\n");
	}
    else if (nb_user < nb_random)
	{
		ft_putstr("Plus grand ! Il te reste ");
		ft_putnbr(life - 1);
		ft_putstr(" vies.\n");
	}
	else
	{
		ft_putstr("Bravo, trouvé en ");
		ft_putnbr(nb_try);
		ft_putstr(" essais !\n");
		check_life = 1;
	}
	return (check_life);
}