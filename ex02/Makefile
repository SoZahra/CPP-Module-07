# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 14:55:06 by fzayani           #+#    #+#              #
#    Updated: 2025/03/18 16:47:52 by fzayani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CC = c++

CFLAG = -Wall -Wextra -Wextra -std=c++98

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): 	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean all