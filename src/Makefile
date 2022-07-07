NAME = libftprinft.a

SRC =

OBJ = (SRC:.c=.o)

CC = gcc

AR = ar rc

RM = rm -rf

VALGRIND = valgrind

SANITIZE = -fsanitize=address -fsanitize=undefined -fsanitize=leak -fsanitize=memory

all: $(NAME)



clean:

fclean:

re:

val: $(VALGRIND) ./a.out

sani: $(CC) $(SANITIZE) $(SRC) -o a.out
