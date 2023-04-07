/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:08:57 by alambert          #+#    #+#             */
/*   Updated: 2023/04/07 16:13:04 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_H
# define SHRUBBERRYCREATIONFORM_H

// Libraries **************************************************************** //
# include "AForm.hpp"
#include <ios>
#include <iostream>
#include <fstream>
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class ShrubberyCreationForm : public AForm	{
	
public:
	ShrubberyCreationForm(void);									// Canonical
	ShrubberyCreationForm(ShrubberyCreationForm const & inst);		// Canonical
	ShrubberyCreationForm(std::string name);
	virtual ~ShrubberyCreationForm(void);							// Canonical

	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const & rhs);// Canonical

	void					execute(Bureaucrat const & rhs) const;


private:
	/*dATA*/
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ****************************************** SHRUBBERRYCREATIONFORM_H //