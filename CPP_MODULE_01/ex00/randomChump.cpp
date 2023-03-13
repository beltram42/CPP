/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:19:20 by alambert          #+#    #+#             */
/*   Updated: 2023/03/13 14:50:17 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Member functions ********************************************************* //
// ********************************************************* Member functions //


// Non Member functions ***************************************************** //

void	randomChump(std::string name) {
	std::cout << "*** instance Stackie2(Stack_two) will be created on the Stack in randomChump function ***" << std::endl;
	Zombie	Stackie2(name);
	std::cout <<  std::endl;

	Stackie2.announce();

	std::cout <<  std::endl;
	std::cout << "*** instance Stackie2(Stack_two) will be destroyed while exiting randomChump function ***" << std::endl;
}
// ***************************************************** Non Member functions //