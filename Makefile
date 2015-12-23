# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfelbacq <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 15:45:06 by cfelbacq          #+#    #+#              #
#    Updated: 2015/12/23 14:31:00 by cfelbacq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = ft_arrange.c \
	  ft_check.c \
	  ft_check_shape.c \
	  ft_get_nb_tetrimino.c \
	  ft_readstdin.c \
	  ft_tetrimino.c \
	  ft_solve.c \
	  main.c 

OBJ = ft_arrange.o \
	  ft_check.o \
	  ft_check_shape.o \
	  ft_get_nb_tetrimino.o \
	  ft_readstdin.o \
	  ft_tetrimino.o \
	  ft_solve.o \
	  main.o

LIB = libft.a

all : $(NAME)

$(NAME) :
	gcc -Werror -Wall -Wextra -c $(SRC)
	gcc -Werror -Wall -Wextra -o $(NAME) $(OBJ) $(LIB)

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
