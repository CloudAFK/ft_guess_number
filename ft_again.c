/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_again.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 12:46:52 by romasant          #+#    #+#             */
/*   Updated: 2026/08/04 13:52:59 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int ft_again(void)
{
    char    buff[2];

	ft_putstr("Rejouer ? (o/n) : ");
    read(0, buff, 1);
    if (buff[0] == 'o')
        return (1);
    else if (buff[0] == 'n')
		return (0);
	return (-1);
}