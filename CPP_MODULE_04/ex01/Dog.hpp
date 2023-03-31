/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:46:04 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 16:52:13 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_H
#define DOG_H

// Libraries **************************************************************** //
#include "Animal.hpp"
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class	Cat : public  ClapTrap	{

public:
	Cat(void);												// Cannonical
	Cat(Cat const & inst);									// Cannonical
	Cat(std::string name);
	Cat(std::string name, int HitP, int NrgP, int AttD);

	~Cat(void);												// Cannonical

	Cat &		operator=(Cat const & rhs);					// Cannonical

	void	attack(std::string const & target);
	void	guardGate(void);

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ******************************************************** DOG_H //