/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 23:40:12 by romasant          #+#    #+#             */
/*   Updated: 2026/08/04 11:11:26 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

void    ft_putnbr(int nb);
void    ft_putstr(char *str);
void    ft_putchar(char c);
int		ft_choice_user(int nb_random, int life, int nb_try);

#endif