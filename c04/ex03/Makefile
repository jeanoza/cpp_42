#TODO: check relink issue - when header changed

NAME = Interface

CC = c++

CFLAGS = -Wall #-Wextra -Werror #-fsanitize=address

INC =  ICharacter.hpp IMateriaSource.hpp AMateria.hpp MateriaSource.hpp Character.hpp Ice.hpp Cure.hpp

SRC = main.cpp MateriaSource.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -std=c++98

%.o:%.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -std=c++98

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean