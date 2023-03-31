/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:34 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 19:08:50 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor Destructor *************************************************** //
ClapTrap::ClapTrap(void) : _privateName("Default"), _privateHitPoints(10), \
_privateEnergyPoints(10), _privateAttackDamage(0)	{
	std::cout << MAGENTA << "Claptrap default constructor has been called for: " << YELLOW << this->getName() << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & inst)	{
	*this = inst;
	std::cout << MAGENTA << "Copy constructor has been called for: " << YELLOW << this->getName() << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _privateName(name), _privateHitPoints(10), \
_privateEnergyPoints(10), _privateAttackDamage(0)	{
	std::cout << MAGENTA << "Claptrap constructor called for: " << YELLOW << this->getName() << std::endl;
}

ClapTrap::~ClapTrap(void)	{
	std::cout << MAGENTA << "Claptrap destructor called for: " << YELLOW << this->getName() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
ClapTrap&		ClapTrap::operator=(ClapTrap const & rhs)	{
	std::cout << MAGENTA "Copy - Assignment operator overload called" CLEAR << std::endl;
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return *this;
}

void			ClapTrap::setName(std::string name)	{
	this->_privateName = name;
}

void			ClapTrap::setHitPoints(int hp)	{
	this->_privateHitPoints = hp;
}

void			ClapTrap::setEnergyPoints(int ep)	{
	this->_privateEnergyPoints = ep;
}

void			ClapTrap::setAttackDamage(int ad)	{
	this->_privateAttackDamage = ad;
}

std::string		ClapTrap::getName(void) const	{
	return (this->_privateName);
}

unsigned int	ClapTrap::getHitPoints(void) const	{
	return (this->_privateHitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const	{
	return (this->_privateEnergyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const	{
	return (this->_privateAttackDamage);
}

void			ClapTrap::attack(const std::string& target)	{ 
	if (this->getEnergyPoints() > 0)	{
		std::cout << YELLOW << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage." << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << this->getName() << " Energy points now at: " << this->getEnergyPoints() << CLEAR << std::endl;
	}
	else 
		std::cout << YELLOW << this->getName() << "'s Energy Points too low to attack " << target << "." << std::endl;
}

void 			ClapTrap::takeDamage(unsigned int amount)	{
	if (this->getHitPoints() >= amount) {
		this->setHitPoints(this->getHitPoints() - amount);
		std::cout << YELLOW << this->getName() << "'s Energy Points: " << this->getEnergyPoints() << "." << CLEAR << std::endl;
	}
	else {
		this->setHitPoints(0);
		std::cout << YELLOW << this->getName() << "'s Energy Points: " << this->getEnergyPoints() << "." << CLEAR << std::endl;
	}
	if (this->getHitPoints() == 0)
		if (this->getEnergyPoints() == 0)
			std::cout << YELLOW << "Sorry, " << this->getName() << " has been killed." << CLEAR << std::endl;
}

void			ClapTrap::beRepaired(unsigned int amount)	{
	if (this->getEnergyPoints() > 0)	{
		this->setHitPoints(this->getHitPoints() + amount);
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << YELLOW << this->getName() << "'s Hit Points are now: " << this->getHitPoints() << std::endl;
		std::cout << this->getName() << "'s Energy Points are now: " << this->getEnergyPoints() << std::endl;
	}
	else
		std::cout << this->getName() << "'s Energy Points too low to repair." << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
std::ostream &	operator<<(std::ostream & out, ClapTrap const & inst)	{
    out << MAGENTA << "********************************************" << CLEAR << std::endl;
    out << YELLOW "Name: " << inst.getName() << std::endl;
    out << "Hit Points: " << inst.getHitPoints() << std::endl;
    out << "Energy Points: " << inst.getEnergyPoints() << std::endl;
    out << "Damages: " << inst.getAttackDamage() << std::endl;
    out << MAGENTA << "********************************************" << CLEAR << std::endl;
    return (out);
}
// ***************************************************** Non Member functions //