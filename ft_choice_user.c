/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choice_user.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 00:08:25 by romasant          #+#    #+#             */
/*   Updated: 2026/08/04 09:36:00 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_verif_nb(int nb_random, int nb_user)
{
	int	(life) = 1;
	if (nb_random != nb_user)
		life = 0;
	return (life);
}

int	ft_choice_user(int nb_random)
{
	char	buff[10];
	int	(nb_user);
	int	(check_life) = 0;

	read(0, buff, 10);
	nb_user = atoi(buff);
	check_life = ft_verif_nb(nb_random, nb_user);
	return (check_life);
}