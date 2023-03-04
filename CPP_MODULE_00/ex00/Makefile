# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alambert <alambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 16:58:44 by alambert          #+#    #+#              #
#    Updated: 2023/02/28 17:06:50 by alambert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXXFLAGS = -Wall -Werror -std=c++98

all: megaphone

a.out: megaphone.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f megaphone