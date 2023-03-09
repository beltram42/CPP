# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alambert <alambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 17:55:42 by alambert          #+#    #+#              #
#    Updated: 2023/03/08 18:49:25 by alambert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# File name
NAME = Phonebook

# Sources
SRCS += Phonebook.class.cpp
SRCS += Contact.class.cpp
SRCS += main.cpp

HEADER += Phonebook.class.hpp
HEADER += Contact.class.hpp

OBJS = ${SRCS:.cpp=.o}

# Compilateurs
CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

## RULES
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SRCS) -o $(NAME) $(CFLAGS)

%.o: %.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re