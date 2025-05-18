NAME = Caraml

CC = gcc

FLAGS = -Wall -Wextra -Werror

OBJ_DIR = obj/

SRC =	src/main.c \
		 src/start/start.c \
		 src/start/lexer/lexer.c \
		 src/start/lexer/init_list.c \
		 src/argument_parser/argv.c \
		
all:
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf bin/$(NAME)

re: fclean all