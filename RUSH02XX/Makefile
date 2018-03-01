#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcarton <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 15:06:51 by rcarton           #+#    #+#              #
#    Updated: 2018/02/24 16:19:59 by rcarton          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = colle-2
FLAG = -Wall -Werror -Wextra
FILES = colle00.c colle01.c colle02.c colle03.c colle04.c
FILESPROG = ft_putchar.c ft_putstr.c ft_atoi.c ft_strcmp.c
FILESLIBR = ft_putchar.o ft_putstr.o ft_atoi.o ft_strcmp.o

all: regle_a regle_b
	gcc -o $(NAME) colle2.c -L. -lft

regle_a:
	gcc $(FLAG) -c $(FILESPROG)
	ar rc libft.a $(FILESLIBR)
	ranlib libft.a

regle_b:
	gcc $(FLAG) -o colle00 colle00.c -L. -lft
	gcc $(FLAG) -o colle01 colle01.c -L. -lft
	gcc $(FLAG) -o colle02 colle02.c -L. -lft
	gcc $(FLAG) -o colle03 colle03.c -L. -lft
	gcc $(FLAG) -o colle04 colle04.c -L. -lft

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f colle00 colle01 colle02 colle03 colle04