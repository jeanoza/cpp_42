#TODO: check relink issue - when header changed

NAME = Abstract

CC = c++

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address

INC = AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp

SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -std=c++98

%.o:%.cpp $(INC)
	$(CC) $(CFLAGS) -c -MMD $< -std=c++98

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean