/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/07 16:33:53 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150

// Libraries **************************************************************** //
#include <iostream>
#include <stdexcept>
# include "AForm.hpp"
// **************************************************************** Libraries //



// Colours ****************************************************************** //
#define CLEAR "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[33m"
#define MAGENTA "\e[35m"
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class	AForm;

class Bureaucrat	{
	public:
		Bureaucrat(void);										// Canonical
		Bureaucrat(Bureaucrat const & inst);					// Canonical
		Bureaucrat(std::string name, int grade);

		virtual ~Bureaucrat(void);								// Canonical

		Bureaucrat	&operator=(Bureaucrat const & rhs);			// Canonical
		Bureaucrat	&operator++(void);
		Bureaucrat	&operator--(void);

		std::string	getName(void) const;
		void		setGrade(int grade);
		int			getGrade(void) const;
		bool		exceptionHandler(int grade);
		void		signForm(AForm & toSign);
		void	executeForm(AForm const & toExec);

	// -- Exception classes ------------------------------------------------- //
		class GradeTooHighException : public std::exception	{
        public:
            virtual const char* what() const throw();
			~GradeTooHighException() throw();
        };
        class GradeTooLowException: public std::exception	{
        public:
            virtual const char* what() const throw();
			~GradeTooLowException() throw();
        };
	// ------------------------------------------------- Exception classes -- //
	protected:
		/*dATA*/
	
	private:
		std::string	const	_privateName;
		int 				_privateGrade;
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
std::ostream &operator<<( std::ostream &out, Bureaucrat const &input );
// ***************************************************** Non Member functions //


#endif // ********************************************************** BUREAUCRAT_H //