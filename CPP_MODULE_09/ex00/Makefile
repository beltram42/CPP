# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alambert <alambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 16:34:50 by alambert          #+#    #+#              #
#    Updated: 2023/04/28 15:12:12 by alambert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# File name ================================================================== #
NAME = BitcoinExchange


# Sources ==================================================================== #
SRCS += BitcoinExchange.cpp
SRCS += main.cpp

HEADER += BitcoinExchange.hpp


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