# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 17:00:13 by ciclo             #+#    #+#              #
#    Updated: 2022/07/26 14:52:29 by ciclo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include libft/Makefile # incluyendo el makefile de libft
# variables del make
NAME = libftprintf.a

SRC = ft_printf.c main.c ft_printf_utils.c

OBJ = $(SRC:.c=.o) # tiene que estar junta la declaracion porque sino elimina los .c en vez de los .o

FLAGS = -Wall -Werror -Wextra

RM = rm -rf
# rules of memory leaks
val = valgrind

SANI = -fsanitize=address -g3

AR = ar rc

CC = gcc
# main makefile build
all:$(NAME) # regla de relink del make si ya esta creado el name no volvera a crearlo

$(NAME) : $(OBJ)

	$(CC) $(FLAGS) $(OBJ) -o $(NAME) && ./$(NAME)
#@echo "\n compilation done \n"

sanitize:

	@$(CC) $(FLAGS) $(SANI) $(SRC)
	@echo "sanitize memory likes done\n"

valgrind:

	@$(val)	./libftprintf.a
	@echo "\n valgind in use xd\n"

clean:

	@$(RM) $(OBJ)
#	@echo "\n clean done \n"

fclean: clean

	@$(RM) $(NAME)
#	@echo "fclean done\n"

re: fclean all

#	@echo "fclean and all done\n"
