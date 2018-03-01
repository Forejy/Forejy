# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarques <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 12:00:51 by jmarques          #+#    #+#              #
#    Updated: 2018/02/26 16:33:16 by jmarques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c \
	srcs/ft_putstr.c \
	srcs/ft_strcmp.c \
	srcs/ft_strlen.c \
	srcs/ft_swap.c \

OBJ = ft_putchar.o \
	  ft_putstr.o \
	  ft_strcmp.o \
	  ft_strlen.o \
	  ft_swap.o

INCLUDES = includes/

all : $(NAME)

$(NAME) :
	gcc -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OBJ) 
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
