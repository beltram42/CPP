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
#include "Brain.hpp"
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class	Animal	{

public:
	Animal(void);												// Canonical
	Animal(Animal const & inst);								// Canonical
	Animal(std::string type);

	virtual ~Animal(void) = 0;									// Canonical



	virtual Animal &		operator=(Animal const & rhs);	// Canonical

	void				setType(std::string type);
	std::string const	getType(void) const;
	
	virtual void		makeSound(void);
	virtual void		getIdeas(int const i) const;


protected:

	std::string		_privateType;

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** ANIMAL_H //