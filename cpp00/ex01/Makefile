# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 14:54:02 by fvon-nag          #+#    #+#              #
#    Updated: 2023/08/29 11:06:37 by fvon-nag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = main.cpp Contact.cpp PhoneBook.cpp

OBJECTS = $(SOURCES:.cpp=.o)

NAME = phonybook
CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

all: $(NAME)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $?
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re

