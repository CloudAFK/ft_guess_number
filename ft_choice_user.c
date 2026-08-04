/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choice_user.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 00:08:25 by romasant          #+#    #+#             */
/*   Updated: 2026/08/04 19:21:52 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_choice_user(int nb_random, int life, int nb_try)
{
	char	buff[10];
	int	(nb_user) = 0;
	int	(check_life) = 0;
	int (i) = 0;
	int	(flag) = 0;
	int (nb_nb) = 0;

	ft_putstr("Ta proposition : ");
	while (i < 10)
	{
		buff[i] = '\0';
		i++;
	}
	i = 0;
	read(0, buff, 9);
	while (buff[i] )
	{
		if (buff[i] != '\0' && buff[i] != '\n')
		{
			if (!ft_isdigit(buff[i]))
			flag = 1;
		}
		i++;
		nb_nb++;
	}
	if (nb_nb == 1)
		return (-1);
	if (flag == 0)
		nb_user = atoi(buff);
	else
		return (-1);
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