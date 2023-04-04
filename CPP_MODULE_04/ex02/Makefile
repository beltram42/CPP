# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alambert <alambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 16:34:50 by alambert          #+#    #+#              #
#    Updated: 2023/04/03 16:44:20 by alambert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# File name ================================================================== #
NAME = MakeSoundAbstract


# Sources ==================================================================== #
SRCS += AAnimal.cpp
SRCS += Brain.cpp
SRCS += Cat.cpp
SRCS += Dog.cpp
SRCS += main.cpp

HEADER += AAnimal.hpp
HEADER += Brain.hpp
HEADER += Cat.hpp
HEADER += Dog.hpp


OBJS = ${SRCS:.cpp=.o}


# Compilateurs =============================================================== #
CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98


## RULES ==================================================================== ##
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