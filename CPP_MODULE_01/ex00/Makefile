# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alambert <alambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 15:19:10 by alambert          #+#    #+#              #
#    Updated: 2023/03/11 16:00:40 by alambert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# File name
NAME = BraiiiiiiinnnzzzZ

# Sources
SRCS += newZombie.cpp
SRCS += randomChump.cpp
SRCS += Zombie.cpp
SRCS += main.cpp

HEADER += Zombie.hpp

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