/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:35:37 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 13:40:03 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructor Destructor *************************************************** //
ScavTrap::ScavTrap(void) : ClapTrap("Default", 100, 50, 20)	{
	std::cout << MAGENTA << "ScavTrap default constructor has been called for: " << YELLOW << this->getName() << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & inst) : ClapTrap(inst._privateName, inst._privateHitPoints, inst._privateEnergyPoints, inst._privateAttackDamage)	{
	*this = inst;
	std::cout << MAGENTA << "ScavTrap Copy constructor has been called for: " << YELLOW << this->getName() << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)	{
	std::cout << MAGENTA << "ScavTrap constructor called for: " << YELLOW << this->getName() << std::endl;
}

ScavTrap::ScavTrap(std::string name, int HitP, int NrgP, int AttD)	{
	this->setName(name);
	this->setHitPoints(HitP);
	this->setEnergyPoints(NrgP);
	this->setAttackDamage(AttD);
	std::cout << MAGENTA << "ScavTrap constructor called for: " << YELLOW << this->getName() << std::endl;
}

ScavTrap::~ScavTrap(void)	{
	std::cout << MAGENTA << "ScavTrap destructor called for: " << YELLOW << this->getName() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
ScavTrap&		ScavTrap::operator=(ScavTrap const & rhs)	{
	std::cout << MAGENTA "ScavTrap Copy - Assignment operator overload called" CLEAR << std::endl;
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return *this;
}

void			ScavTrap::attack(const std::string& target)	{ 
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)	{
		std::cout << YELLOW << "ScavTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage." << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << this->getName() << " Energy points now at: " << this->getEnergyPoints() << CLEAR << std::endl;
	}
	else 
		std::cout << YELLOW << this->getName() << "'s Energy Points too low to attack " << target << "." << std::endl;
}

void	ScavTrap::guardGate(void)	{
	std::cout << MAGENTA<< "ScavTrap: " << this->getName() << " now in gate keeper mode." << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //