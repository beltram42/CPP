# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alambert <alambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 16:34:50 by alambert          #+#    #+#              #
#    Updated: 2023/04/08 11:06:17 by alambert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# File name ================================================================== #
NAME = Intern


# Sources ==================================================================== #
SRCS += Bureaucrat.cpp
SRCS += AForm.cpp
SRCS += PresidentialPardonForm.cpp
SRCS += RobotomyRequestForm.cpp
SRCS += ShrubberyCreationForm.cpp
SRCS += Intern.cpp
SRCS += main.cpp

HEADER += Bureaucrat.hpp
HEADER += AForm.hpp
HEADER += PresidentialPardonForm.hpp
HEADER += RobotomyRequestForm.hpp
HEADER += ShrubberyCreationForm.hpp
HEADER += Intern.hpp


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