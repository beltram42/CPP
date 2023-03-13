# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alambert <alambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 15:37:29 by alambert          #+#    #+#              #
#    Updated: 2023/03/11 15:48:59 by alambert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# File name
NAME = Violence

# Sources
SRCS += HumanA.cpp
SRCS += HumanB.cpp
SRCS += Weapon.cpp
SRCS += main.cpp

HEADER += HumanA.hpp
HEADER += HumanB.hpp
HEADER += Weapon.hpp

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