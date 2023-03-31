/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:15:01 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 20:17:43 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

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
class	WrongAnimal	{

public:
	WrongAnimal(void);											// Cannonical
	WrongAnimal(WrongAnimal const & inst);						// Cannonical
	WrongAnimal(std::string type);

	virtual ~WrongAnimal(void);									// Cannonical



	WrongAnimal &	operator=(WrongAnimal const & rhs);			// Cannonical

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


#endif // ********************************************************** CLAPTRAP_H //