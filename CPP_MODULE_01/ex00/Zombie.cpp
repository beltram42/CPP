/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:19:24 by alambert          #+#    #+#             */
/*   Updated: 2023/03/13 13:27:57 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



// Constructor Destructor *************************************************** //

Zombie::Zombie (std::string name) {
	this->setName(name);
	std::cout << "Zombie: " << this->getName() << " Constructor called..." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << this->Zombie::getName() << " Destructor called!" << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //

void		Zombie::setName(std::string token) {
	this->_privateName = token;
}

std::string Zombie::getName(void) const {
	return this->_privateName;
}

void    Zombie::announce( void )
{
    std::cout << this->getName() << ": " <<  "BraiiiiiiinnnzzzZ..." << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //