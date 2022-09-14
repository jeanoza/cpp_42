NAME = easyfind

CC = c++

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address

INC =  easyfind.hpp

SRC = main.cpp

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