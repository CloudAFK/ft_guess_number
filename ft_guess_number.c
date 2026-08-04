/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_guess_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 23:11:46 by romasant          #+#    #+#             */
/*   Updated: 2026/08/04 12:46:46 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_lib.h"

int main(void)
{
    srand(time(NULL));
    int nombre_random;
    int (life) = 10;
    int (check_life) = 1;
    int (nb_try) = 1;
    
    nombre_random = rand() % 100 + 1;
    ft_putstr("Devine le nombre entre 1 et 100 ! Tu as 10 vies.\n");
	while (nb_try != 10)
	{
		printf("Nombre machine : %d\n", nombre_random);
		check_life = ft_choice_user(nombre_random, life, nb_try);
		if (check_life == 0)
			life -= 1;
		else if (check_life == 1)
		{
			
		}
		nb_try++;
	}
	ft_putnbr(nombre_random);
	ft_putchar('\n');
	ft_putnbr(life);
    return (0);
}
