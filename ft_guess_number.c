/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_guess_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 23:11:46 by romasant          #+#    #+#             */
/*   Updated: 2026/08/04 09:43:56 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_lib.h"

int main(void)
{
    srand(time(NULL));
    int nombre_random;
    int (life) = 10;
    int (check_life) = 0;
    int (nb_try) = 0;
    
    nombre_random = rand() % 100 + 1;
    ft_putstr("Devine le nombre entre 1 et 100 ! Tu as 10 vies.\n");
	check_life = ft_choice_user(nombre_random);
	while ()
	{
		if (check_life == 0)
		{
			life -= 1;
		}
		else
		{
			ft_putstr("Bravo, trouvé en ");
			ft_putnbr(nb_try);
			ft_putstr("essais !\n");
		}
	}
	ft_putnbr(life);
    return (0);
}
