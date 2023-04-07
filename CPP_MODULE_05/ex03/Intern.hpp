/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:10:08 by alambert          #+#    #+#             */
/*   Updated: 2023/04/07 21:36:19 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

// Libraries **************************************************************** //
#include <map>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class	AForm;

class Intern {
public:
		Intern(void);										// Canonical
		Intern(Bureaucrat const & inst);					// Canonical
		Intern(std::string name, int grade);

		virtual ~Intern(void);								// Canonical

		Intern	&operator=(Intern const & rhs);				// Canonical

		AForm*	makeForm(std::string& form_name, std::string& target) const;
		
		
protected:
	/*dATA*/
	
private:
	/*dATA*/	
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** INTERN_H //