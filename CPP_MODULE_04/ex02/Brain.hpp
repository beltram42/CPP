/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:53:59 by alambert          #+#    #+#             */
/*   Updated: 2023/04/03 15:49:08 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_H
# define BRAIN_H

// Libraries **************************************************************** //
#include <iostream>
#include <cstdlib>
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
class	Brain	{

public:
	Brain(void);												// Canonical
	Brain(Brain const & inst);									// Canonical

	~Brain(void);										// Canonical


	Brain &			operator=(Brain const & rhs);				// Canonical

	void			setIdeas(void);
	const std::string		&getIdeas(int i) const;


protected:
	std::string	_privateIdeas[100];

private:
		//** dATA **//


};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** BRAIN_H //