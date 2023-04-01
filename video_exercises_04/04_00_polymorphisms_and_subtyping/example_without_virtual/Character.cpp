/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:48:51 by alambert          #+#    #+#             */
/*   Updated: 2023/04/01 16:03:08 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructor Destructor *************************************************** //
Character::Character(void)	{
	std::cout << "Character: Default constructor has been called" << std::endl;
}

Character::Character(Character const & inst)	{
	*this = inst;
	std::cout << "Character: Copy constructor has been called" << std::endl;
}

Character::~Character(void)	{
	std::cout << "Character: Destructor called" << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
void		Character::sayHello(std::string const & target)	{
	std::cout << "Hey you! " << target << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //