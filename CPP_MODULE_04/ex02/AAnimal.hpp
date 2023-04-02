/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:42:38 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 14:12:27 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AANIMAL_H
# define AANIMAL_H

// Libraries **************************************************************** //
#include "Brain.hpp"
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class	AAnimal	{

public:
	AAnimal(void);												// Canonical
	AAnimal(AAnimal const & inst);								// Canonical
	AAnimal(std::string type);

	virtual ~AAnimal(void) = 0;									// Canonical



	virtual AAnimal &		operator=(AAnimal const & rhs) = 0;	// Canonical

	void				setType(std::string type);
	std::string const	getType(void) const;
	
	virtual void		makeSound(void) const = 0;
	virtual Brain		*getIdea(void);


protected:

	std::string		_privateType;

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** AANIMAL_H //