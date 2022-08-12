NAME = harl

CC = c++

CFLAGS = -Wall -Wextra -Werror

INC = Harl.hpp

SRC = main.cpp Harl.cpp

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