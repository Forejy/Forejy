# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarques <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 12:00:51 by jmarques          #+#    #+#              #
#    Updated: 2018/03/01 13:25:13 by jmarques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = srcs/ft_display_file.c



HEADER = includes/header.h

all : $(NAME)

$(NAME) : 
	gcc -Wall -Werror -Wextra $(SRCS) $(HEADER)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
