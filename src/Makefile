# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 17:00:13 by ciclo             #+#    #+#              #
#    Updated: 2022/07/08 18:30:36 by ciclo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include libft/Makefile

NAME = libftprinft.a

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)

CC = gcc

AR = ar rc

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

VAL = valgrind

SANITIZE = -fsanitize=address -fsanitize=undefined -fsanitize=leak -fsanitize=memory

all: $(NAME)

 $(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "Compilation done"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re:

val: $(VAL) ./a.out

sani: $(CC) $(FLAGS) $(SANITIZE) $(SRC) -o a.out
