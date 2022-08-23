#TODO: check relink issue - when header changed

NAME = Brain

CC = c++

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address

INC = Animal.hpp Cat.hpp Dog.hpp 

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -std=c++98

.cpp.o:
	$(CC) $(CFLAGS) -c $< -std=c++98

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean