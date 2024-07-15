# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luca <luca@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 17:37:34 by luca              #+#    #+#              #
#    Updated: 2024/07/15 19:02:15 by luca             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SOURCE = main.cpp AForm.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp\

OBJ = $(SOURCE:.cpp=.o)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

NAME = bureaucrat

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re:	fclean $(NAME)

.PHONY: all clean fclean re
