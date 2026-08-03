# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romasant <romasant@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/03 23:50:11 by romasant          #+#    #+#              #
#    Updated: 2026/08/04 00:07:22 by romasant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
AR= ar rcs
CFLAGS= -Wall -Wextra -Werror
FILES_C= *.c
EXEC= ./a.out
.PHONY:
	all clean fclean re

all:
	$(CC) $(CFLAGS) $(FILES_C) -o $(EXEC)

clean:
	@echo "Aucun .o a supprimer XD"
fclean:
	rm -rf $(EXEC)
re:
	$(fclean) $(all)