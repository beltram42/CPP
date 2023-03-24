/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:26:36 by alambert          #+#    #+#             */
/*   Updated: 2023/03/16 16:50:53 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int ac, char **av) {
	if (ac != 4)
		std::cout << "*** Error, mandatory format = ./Replace file s1 s2" << std::endl;
	/*else if (av[2][0] == '\0')
		std::cout << "*** Error, s1 can't be empty" << std::endl;*/
	else {
		Replace newFile;
    	newFile.ft_Replace(av[1], av[2], av[3]);
	}
	return (0);
}