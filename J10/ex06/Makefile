# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarques <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 12:00:51 by jmarques          #+#    #+#              #
#    Updated: 2018/02/26 19:50:50 by jmarques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = ft_do_op.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_atoi.c ft_operator.c

FLAGS = -Werror -Wall -Wextra

all : $(NAME)

$(NAME) :
	gcc $(FLAGS) $(SRCS) -o $(NAME)

clean : 
	rm -f $(NAME)

re : clean all
