/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:45:49 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 16:48:40 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor Destructor *************************************************** //
Cat::Cat(void) : Animal("Default", 100, 50, 20)	{
	std::cout << MAGENTA << "Cat default constructor has been called for: " << YELLOW << this->getName() << std::endl;
}

Cat::Cat(Cat const & inst) : Animal(inst._privateName, inst._privateHitPoints, inst._privateEnergyPoints, inst._privateAttackDamage)	{
	*this = inst;
	std::cout << MAGENTA << "Cat Copy constructor has been called for: " << YELLOW << this->getName() << std::endl;
}

Cat::Cat(std::string name) : Animal(name, 100, 50, 20)	{
	std::cout << MAGENTA << "Cat constructor called for: " << YELLOW << this->getName() << std::endl;
}

Cat::Cat(std::string name, int HitP, int NrgP, int AttD)	{
	this->setName(name);
	this->setHitPoints(HitP);
	this->setEnergyPoints(NrgP);
	this->setAttackDamage(AttD);
	std::cout << MAGENTA << "Cat constructor called for: " << YELLOW << this->getName() << std::endl;
}

Cat::~Cat(void)	{
	std::cout << MAGENTA << "Cat destructor called for: " << YELLOW << this->getName() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Cat&		Cat::operator=(Cat const & rhs)	{
	std::cout << MAGENTA "Cat Copy - Assignment operator overload called" CLEAR << std::endl;
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return *this;
}

void			Cat::attack(const std::string& target)	{ 
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)	{
		std::cout << YELLOW << "Cat " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage." << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << this->getName() << " Energy points now at: " << this->getEnergyPoints() << CLEAR << std::endl;
	}
	else 
		std::cout << YELLOW << this->getName() << "'s Energy Points too low to attack " << target << "." << std::endl;
}

void	Cat::guardGate(void)	{
	std::cout << "Cat: " << this->getName() << " now in gate keeper mode." << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //