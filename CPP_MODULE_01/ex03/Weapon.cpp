/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:20 by alambert          #+#    #+#             */
/*   Updated: 2023/03/13 19:36:27 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor Destructor *************************************************** //

Weapon:: Weapon(std::string instance_type) {
	this->setType(instance_type);
	std::cout << "Weapon: " << this->getType() << " Constructor has been called" << std::endl;
}

Weapon::~Weapon( void ) {
	std::cout << "Weapon: " << this->getType() << "Destructor has been called" << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //

const std::string&	Weapon::getType() const {
    return (_privateType);
}

void        		Weapon::setType(std::string type) {
    this->_privateType = type;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //