/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:42:38 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 16:44:48 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_H
# define CLAPTRAP_H

// Libraries **************************************************************** //
#include <iostream>
#include <string>
// **************************************************************** Libraries //



// Colours ****************************************************************** //
#define CLEAR "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[33m"
#define MAGENTA "\e[35m"
#define CYAN "\e[0;36m"
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class	Animal	{

public:
	Animal(void);												// Cannonical
	Animal(Animal const & inst);							// Cannonical
	Animal(std::string name);
	Animal(std::string name, int HitP, int NrgP, int AttD);

	~Animal(void);											// Cannonical



	Animal &		operator=(Animal const & rhs);			// Cannonical

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	void			setName(std::string name);
	void			setHitPoints(int hp);
	void			setEnergyPoints(int ep);
	void			setAttackDamage(int ad);

	std::string		getName(void) const;
	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getAttackDamage(void) const;

protected:

	std::string		_privateName;
	unsigned int	_privateHitPoints;
	unsigned int	_privateEnergyPoints;
	unsigned int	_privateAttackDamage;

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
std::ostream &			operator<<(std::ostream & out, Animal const & inst);
// ***************************************************** Non Member functions //


#endif // ********************************************************** CLAPTRAP_H //