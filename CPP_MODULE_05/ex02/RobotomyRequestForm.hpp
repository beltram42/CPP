/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:08:49 by alambert          #+#    #+#             */
/*   Updated: 2023/04/06 18:58:04 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

// Libraries **************************************************************** //
# include "Form.hpp"
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class RobotomyRequestForm : public Form	{
	
public:
	RobotomyRequestForm(void);										// Canonical
	RobotomyRequestForm(RobotomyRequestForm const & inst);			// Canonical
	RobotomyRequestForm(std::string name);
	virtual ~RobotomyRequestForm(void);								// Canonical

	RobotomyRequestForm	&operator=(RobotomyRequestForm const & rhs);// Canonical

	void					execute(Bureaucrat const & rhs);


private:
	/*dATA*/
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************* ROBOTOMYREQUESTFORM_H //