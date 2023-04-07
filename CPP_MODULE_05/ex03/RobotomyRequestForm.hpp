/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:08:49 by alambert          #+#    #+#             */
/*   Updated: 2023/04/07 16:00:58 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

// Libraries **************************************************************** //
# include "AForm.hpp"
# include <cstdlib>
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class RobotomyRequestForm : public AForm	{
	
public:
	RobotomyRequestForm(void);										// Canonical
	RobotomyRequestForm(RobotomyRequestForm const & inst);			// Canonical
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm(void);								// Canonical

	RobotomyRequestForm	&operator=(RobotomyRequestForm const & rhs);// Canonical

	void					execute(Bureaucrat const & rhs) const;


private:
	/*dATA*/
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************* ROBOTOMYREQUESTFORM_H //