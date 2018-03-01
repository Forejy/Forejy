# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarques <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 12:00:51 by jmarques          #+#    #+#              #
#    Updated: 2018/02/24 17:20:17 by jmarques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

RUSH_FILES = srcs/rush00.c srcs/rush01.c srcs/rush02.c srcs/rush03.c srcs/rush04.c srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_atoi.c

COLLE_FILE = srcs/colle-2.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_atoi.c

HEADER = includes/header.h

LIB = includes/libft.a

FLAGS = -Wextra -Werror -Wall

all : compile

precompile : 
	gcc $(FLAGS) $(RUSH_FILES) $(HEADER)
	gcc $(COLLE_FILE) $(HEADER) -o $(NAME)

compile : precompile
	ar rc $(NAME) *.o

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)
