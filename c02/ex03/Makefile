NAME = fixed

CC = c++

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address

INC = Fixed.hpp Point.hpp

SRC = main.cpp Fixed.cpp Point.cpp

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