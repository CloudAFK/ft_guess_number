/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_guess_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 23:11:46 by romasant          #+#    #+#             */
/*   Updated: 2026/08/04 14:21:13 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_lib.h"

int main(void)
{
    srand(time(NULL));
    int nombre_random;
    int (life) = 10;
    int (flag_choice) = 0;
    int (flag_again) = 2;
    int (nb_try) = 1;
    
    nombre_random = rand() % 100 + 1;
    ft_putstr("Devine le nombre entre 1 et 100 ! Tu as 10 vies.\n");
	while (life > 0)
	{
		printf("Nombre machine : %d\n", nombre_random);
		flag_choice = ft_choice_user(nombre_random, life, nb_try);
		if (flag_choice == 0)
		{
			life -= 1;
			if (life == 0)
				ft_putstr("Perdu ! Le nombre était ");
		}
		else
		{
			flag_again = ft_again();
			if (flag_again == 1)
				main();
			else if (flag_again == 0)
			{
				ft_putstr("Au revoir a la prochaine !!\n");
				break ;
			}
			else
			{
				ft_putstr("Erreur : Tu dois mettre 'o' ou 'n'\n");
				ft_again();
			}
	}
		nb_try++;
	}
	ft_putchar('\n');
    return (0);
}
