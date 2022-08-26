#TODO: check relink issue - when header changed

NAME = Abstract

CC = c++

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address

INC = AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp

SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp

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