/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:34 by alambert          #+#    #+#             */
/*   Updated: 2023/03/29 19:24:17 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor Destructor *************************************************** //
ClapTrap::ClapTrap(void) : _privateName("Default"), _privateHitPoints(10), \
_privateEnergyPoints(10), _privateAttackDamage(0)	{
	std::cout << MAGENTA "Claptrap default constructor has been called for: " << YELLOW this->getName()  CLEAR << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & inst)	{
	*this = inst;
	std::cout << MAGENTA "Copy constructor has been called for: " << YELLOW this->getName() CLEAR << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _privateName(name), _privateHitPoints(10), \
_privateEnergyPoints(10), _privateAttackDamage(0)	{
	std::cout << MAGENTA "Claptrap constructor called for: " << YELLOW this->getName() CLEAR << std::endl;
}

ClapTrap::~ClapTrap(void)	{
	std::cout << MAGENTA "Claptrap destructor called for: " << YELLOW this->getName() CLEAR << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
ClapTrap&		ClapTrap::operator=(ClapTrap const & rhs)	{
	std::cout << MAGENTA "Copy - Assignment operator overload called" CLEAR << std::endl;
	this->_privateHitPoints = rhs.getHitPoints();
	this->_privateEnergyPoints = rhs.getEnergyPoints();
	this->_privateAttackDamage = rhs.getAttackDamage();
	return *this;
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

std::string		ClapTrap::getName(void)	{
	return (this->_privateName);
}

unsigned int	ClapTrap::getHitPoints(void)	{
	return (this->_privateHitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void)	{
	return (this->_privateEnergyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void)	{
	return (this->_privateAttackDamage);
}

void			ClapTrap::attack(const std::string& target)	{ 
	// a rendre coherent ce n'est pas celui qui attaque dont les energy points doivent baisser
	if (this->getEnergyPoints() > 0 and this->getHitPoints() > 0)	{
        std::cout << YELLOW this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage" << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "Energy points now at: " << target.getEnergyPoints() CLEAR << std::endl;
        return ;
    }
    std::cout << YELLOW "ENERGY TOO LOW: 0" CLEAR << std::endl;
}

void 			ClapTrap::takeDamage(unsigned int amount)	{
	// a rendre coherent ce n'est pas celui qui attaque dont les energy points doivent baisser
    std::cout << YELLOW this->getName() << " took " << amount << " points of damage" CLEAR << std::endl;
    if (amount > this->_hitPoints)
    {
        this->_hitPoints = 0;
        return ;
    }
    this->_hitPoints = this->_hitPoints - amount;
    return ;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
std::ostream &	operator<<(std::ostream & out, Fixed const & inst)	{
	
    out << YELLOW "------------------------------" << std::endl;
    out << "Name : " << inst.getName() << std::endl;
    out << "Hit Points : " << inst.getHitPoints() << std::endl;
    out << "Energy Points : " << inst.getEnergyPoints() << std::endl;
    out << "Damages : " << inst.getAttackDamage() << std::endl;
    out << "------------------------------" CLEAR << std::endl;
    return (out);
}
// ***************************************************** Non Member functions //