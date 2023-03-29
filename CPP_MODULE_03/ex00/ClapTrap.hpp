/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:41 by alambert          #+#    #+#             */
/*   Updated: 2023/03/29 18:53:25 by alambert         ###   ########.fr       */
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
class	ClapTrap	{

public:
	ClapTrap(void);												// Cannonical
	ClapTrap(ClapTrap const & inst);							// Cannonical
	ClapTrap(std::string name);

	~ClapTrap(void);											// Cannonical



	ClapTrap &		operator=(ClapTrap const & rhs);			// Cannonical

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);


	void			setHitPoints(int hp);
	void			setEnergyPoints(int ep);
	void			setAttackDamage(int ad);
	unsigned int	getHitPoints(void);
	unsigned int	getEnergyPoints(void);
	unsigned int	getAttackDamage(void);



private:

	std::string		_privateName;
	unsigned int	_privateHitPoints;
	unsigned int	_privateEnergyPoints;
	unsigned int	_privateAttackDamage;

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
std::ostream &			operator<<(std::ostream & out, Fixed const & inst);
// ***************************************************** Non Member functions //


#endif // ********************************************************** CLAPTRAP_H //