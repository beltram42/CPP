/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:48:59 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 10:42:45 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warrior.hpp"

// Constructor Destructor *************************************************** //
Warrior::Warrior(void)	{
	std::cout << "Warrior: Default constructor has been called" << std::endl;
}

Warrior::Warrior(Warrior const & inst)	{
	*this = inst;
	std::cout << "Warrior: Copy constructor has been called" << std::endl;
}

Warrior::~Warrior(void)	{
	std::cout << "Warrior: Destructor called" << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
void		Warrior::attack(std::string const & target)	{
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //