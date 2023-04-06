/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:08:42 by alambert          #+#    #+#             */
/*   Updated: 2023/04/06 18:38:36 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

// Libraries **************************************************************** //
# include "Form.hpp"
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class PresidentialPardonForm : public Form	{
	
public:
	PresidentialPardonForm(void);									// Canonical
	PresidentialPardonForm(PresidentialPardonForm const & inst);	// Canonical
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm(void);							// Canonical

	PresidentialPardonForm	&operator=(PresidentialPardonForm const & rhs); // Canonical

	void					execute(Bureaucrat const & rhs);


private:
	/*dATA*/
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ****************************************** PRESIDENTIALPARDONFORM_H //