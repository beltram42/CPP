/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:37 by alambert          #+#    #+#             */
/*   Updated: 2023/03/13 23:06:16 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Constructor Destructor *************************************************** //

HumanA::HumanA(std::string name, Weapon& weapon) : _privateName(name), _privateWeapon(weapon) {
	std::cout << "HumanA: " << this->getName() << " Constructor has been called" << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << "HumanA: " << this->getName() << " Destructor has been called" << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //

std::string HumanA::getName(void) const {
	return this->_privateName;
}

void	HumanA::attack( void )	{
	std::cout << this->getName() << " attacks with their " << _privateWeapon.getType() << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //