# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 17:00:13 by ciclo             #+#    #+#              #
#    Updated: 2022/07/09 16:16:46 by ciclo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include libft/Makefile # incluyendo el makefile de libft
# variables del make
NAME = libftprintf.a

SRC = ft_printf.c

OBJ = $(SRC:.c=.o) # tiene que estar junta la declaracion porque sino elimina los .c en vez de los .o

FLAGS = -Wall -Werror -Wextra

RM = rm -rf
# rules of memory leaks
val = valgrind

SANI = -fsanitize=address -g3

CC = gcc
# main makefile build
all : $(NAME) # regla de relink del make si ya esta creado el name no volvera a crearlo

$(NAME) : $(OBJ)

	@$(CC) $(FLAGS) $(OBJ) -o $(NAME) && ./libftprintf.a
	@echo "compilation done\n"

sanitize :

	@$(CC) $(FLAGS) $(SANI) $(SRC)
	@echo "sanitize memory likes done\n"

valgrind :

	@$(val)	./libftprintf.a

clean :

	@$(RM) $(OBJ)
	@echo "clean done\n"

fclean : clean

	@$(RM) $(NAME)
	@echo "fclean done"

re : fclean all

	@echo "fclean and all done\n"
