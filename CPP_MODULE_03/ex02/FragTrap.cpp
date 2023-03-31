/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:36:17 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 12:16:47 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructor Destructor *************************************************** //
FragTrap::FragTrap(void) : ClapTrap("Default", 100, 100, 30)	{
	std::cout << MAGENTA << "FragTrap default constructor has been called for: " << YELLOW << this->getName() << std::endl;
}

FragTrap::FragTrap(FragTrap const & inst) : ClapTrap(inst._privateName, inst._privateHitPoints, inst._privateEnergyPoints, inst._privateAttackDamage)	{
	*this = inst;
	std::cout << MAGENTA << "FragTrap Copy constructor has been called for: " << YELLOW << this->getName() << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)	{
	std::cout << MAGENTA << "FragTrap constructor called for: " << YELLOW << this->getName() << std::endl;
}

FragTrap::FragTrap(std::string name, int HitP, int NrgP, int AttD)	{
	this->setName(name);
	this->setHitPoints(HitP);
	this->setEnergyPoints(NrgP);
	this->setAttackDamage(AttD);
	std::cout << MAGENTA << "FragTrap constructor called for: " << YELLOW << this->getName() << std::endl;
}

FragTrap::~FragTrap(void)	{
	std::cout << MAGENTA << "FragTrap destructor called for: " << YELLOW << this->getName() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
FragTrap&		FragTrap::operator=(FragTrap const & rhs)	{
	std::cout << MAGENTA "FragTrap Copy - Assignment operator overload called." CLEAR << std::endl;
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return *this;
}

void			FragTrap::attack(const std::string& target)	{ 
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)	{
		std::cout << YELLOW << "FragTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage." << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << this->getName() << " Energy points now at: " << this->getEnergyPoints() << CLEAR << std::endl;
	}
	else 
		std::cout << YELLOW << this->getName() << "'s Energy Points too low to attack " << target << "." << std::endl;
}

void	FragTrap::highFivesGuys(void)	{
	std::cout << "FragTrap: " << this->getName() << " requires everyone's to high five!" << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //