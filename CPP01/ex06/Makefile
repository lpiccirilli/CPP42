# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luca <luca@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 14:42:23 by luca              #+#    #+#              #
#    Updated: 2024/04/20 15:13:41 by luca             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SOURCE = main.cpp Harl.cpp \

OBJ = $(SOURCE:.cpp=.o)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

NAME = harlFilter

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re:	fclean $(NAME)

.PHONY: all clean fclean re
