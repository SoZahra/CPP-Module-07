# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 11:33:39 by fzayani           #+#    #+#              #
#    Updated: 2025/03/18 14:01:21 by fzayani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identify

CC = c++

CFLAG = -Wall -Wextra -Wextra -std=c++98

SRC = main.cpp Whatever.cpp

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