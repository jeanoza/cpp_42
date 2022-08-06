NAME = phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror

SRC =	Contact.cpp \
		PhoneBook.cpp \
		main.cpp\

OBJ = $(SRC:.cpp=.o) 

all: $(NAME)

$(NAME): $(OBJ) Contact.hpp PhoneBook.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -std=c++98

.cpp.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean