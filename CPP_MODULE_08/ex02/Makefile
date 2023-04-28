# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alambert <alambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 16:34:50 by alambert          #+#    #+#              #
#    Updated: 2023/04/27 10:01:46 by alambert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# File name ================================================================== #
NAME = Mutated


# Sources ==================================================================== #
SRCS += main.cpp

HEADER += MutantStack.hpp


OBJS = ${SRCS:.cpp=.o}


# Compilateurs =============================================================== #
CC = c++
CFLAGS = -g3 -Wall -Wextra -Werror -std=c++98


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