NAME	= zombie

CC		= c++

CFLAGS	= -Wall -Wextra -Werror

SRC		= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ		= $(SRC:.cpp=.o)

all		: $(NAME)

$(NAME)	: $(OBJ) Zombie.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -std=c++98

.cpp.o:
	$(CC) $(CFLAGS) -c $< -std=c++98

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean