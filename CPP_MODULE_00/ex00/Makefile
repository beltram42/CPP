# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alambert <alambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 16:58:44 by alambert          #+#    #+#              #
#    Updated: 2023/03/09 12:04:50 by alambert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# File name
NAME = megaphone

# Sources
SRCS += Phonebook.class.cpp

OBJS = ${SRCS:.cpp=.o}

# Compilateurs
CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98


#RULES
all: $(NAME)

%.o: %.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -f megaphone

re: clean all

.PHONY: all clean  re