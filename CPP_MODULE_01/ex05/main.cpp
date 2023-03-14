/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:28:06 by alambert          #+#    #+#             */
/*   Updated: 2023/03/14 14:55:06 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


bool	checkentry(std::string input) {

	if (!input.length())
		return (0);
	if (input.compare("DEBUG") &&	input.compare("INFO") && input.compare("WARNING") && input.compare("ERROR"))
		return (std::cout << std::endl << "Harl's mouth bad input, try again" << std::endl << "Harl's only known inputs are WARNING, INFO, DEBUG or ERROR" << std::endl, 0);
	return (1);
}

int	main( void ) {

	std::string	input;
	Harl		Harl;

	while (42) {

		std::cout << std::endl << "Enter complain type: ";
		std::getline(std::cin, input);
		if (checkentry(input))
			break ;
		if (std::cin.eof())
			return (std::cout << "See you!" << std::endl, 0);
	}
	std::cout << std::endl;
	Harl.complain(input);
	std::cout << std::endl;
	return (0);

}