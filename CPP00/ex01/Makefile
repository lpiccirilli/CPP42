CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SOURCE = main.cpp phonebook.cpp contact.cpp\

OBJ = $(SOURCE:.cpp=.o)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

NAME = Phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re:	fclean $(NAME)

.PHONY: all clean fclean re
