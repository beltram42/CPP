/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:41:44 by alambert          #+#    #+#             */
/*   Updated: 2023/04/03 16:41:45 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#ifndef AANIMAL_H
# define AANIMAL_H

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
class	AAnimal	{

public:
	AAnimal(void);												// Canonical
	AAnimal(AAnimal const & inst);								// Canonical
	AAnimal(std::string type);

	virtual ~AAnimal(void);										// Canonical


	AAnimal &		operator=(AAnimal const & rhs);				// Canonical

	void				setType(std::string type);
	std::string const	getType(void) const;
	
	virtual void		makeSound(void) const = 0;
	virtual void		getIdeas(void) const = 0;

protected:

	std::string		_privateType;

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** AANIMAL_H //