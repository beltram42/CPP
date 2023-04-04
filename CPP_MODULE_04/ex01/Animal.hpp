/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:42:38 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 14:12:27 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_H
# define ANIMAL_H

// Libraries **************************************************************** //
#include <iostream>
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
	Animal(void);												// Canonical
	Animal(Animal const & inst);								// Canonical
	Animal(std::string type);

	virtual ~Animal(void);										// Canonical


	Animal &		operator=(Animal const & rhs);		// Canonical

	void				setType(std::string type);
	std::string const	getType(void) const;
	
	virtual void		makeSound(void) const;
	virtual void		getIdeas(void) const;

protected:

	std::string		_privateType;

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** ANIMAL_H //