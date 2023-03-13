/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:21:28 by alambert          #+#    #+#             */
/*   Updated: 2023/03/13 18:12:27 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(void) {
	
	std::string	usr_entry;
	int			N(0); // number of zombies
	
	std::cout << "Now, let's create a horde of zombies!" << std::endl;
	std::cout << std::endl;
	std::cout << "Since no one happened to know what their names were, let's call them all Bob?" << std::endl;
	std::cout << std::endl;
	std::cout << "How many Bobs would you like?" << std::endl;
	std::getline(std::cin, usr_entry);

	const char	*startptr = usr_entry.c_str();
	char 		*endptr;

	N = std::strtol(startptr, &endptr, 10);
	if ((N == 0) && (startptr == endptr))
		std::cout << "invalid number of Bobs" << std::endl;
	else if (N <= 0) {
		std::cout << "Number of Bobs should always be greater than 0" << std::endl;
	}
	else {
		Zombie	*HordeofBobs = zombieHorde(N, "Bob");
		if (!HordeofBobs) {
			std::cerr << "HordeofBobs failure" << std::endl;
			return (0);
		}
		for (int i = 0; i < N; i++) {
			HordeofBobs->announce();
		}
		delete [] HordeofBobs;
	}
	return (0);
}