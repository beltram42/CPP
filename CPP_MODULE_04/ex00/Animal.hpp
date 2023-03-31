/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:42:38 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 20:26:20 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_H
# define ANIMAL_H

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
	Animal(Animal const & inst);								// Cannonical
	Animal(std::string type);

	virtual ~Animal(void);										// Cannonical



	Animal &		operator=(Animal const & rhs);				// Cannonical

	void			setType(std::string type);
	std::string		getType(void) const;
	
	virtual void	makeSound(void) const;


protected:

	std::string		_privateType;

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** ANIMAL_H //