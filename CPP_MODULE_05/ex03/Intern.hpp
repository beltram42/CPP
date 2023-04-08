/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:10:08 by alambert          #+#    #+#             */
/*   Updated: 2023/04/08 11:44:43 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

// Libraries **************************************************************** //
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
		Intern(Intern const & inst);						// Canonical

		virtual ~Intern(void);								// Canonical

		Intern	&operator=(Intern const & rhs);				// Canonical

		AForm*	makeForm(std::string formName, std::string target);
		AForm*	shrubbery(std::string target);
        AForm*	presidential(std::string target);
        AForm*	robotomy(std::string target);
		

		class NonExistentFormException : public std::exception	{
            public:
            virtual char const * what() const throw();
        };
		
private:
	/*dATA*/	
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** INTERN_H //