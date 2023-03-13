/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:29 by alambert          #+#    #+#             */
/*   Updated: 2023/03/13 23:08:06 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructor Destructor *************************************************** //

HumanB::HumanB(std::string name) {
	this->setName(name);
	std::cout << "HumanB: " << this->getName() << " Constructor has been called" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB: " << this->getName() << " Destructor has been called" << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //

void	HumanB::setName(std::string name) {
	this->_privateName = name;
}

std::string	HumanB::getName(void) const {
	return this->_privateName;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_privateWeapon = &weapon;
}

void	HumanB::attack( void )	{
	std::cout << this->getName() << " attacks with their " << _privateWeapon->getType() << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //