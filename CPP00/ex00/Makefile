CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SOURCE = megaphone.cpp \

OBJ = $(SOURCE:.cpp=.o)

%.o:%.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re:	fclean $(NAME)

.PHONY: all clean fclean re
