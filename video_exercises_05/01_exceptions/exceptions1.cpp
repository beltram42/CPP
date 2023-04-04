/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions1.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:43:55 by alambert          #+#    #+#             */
/*   Updated: 2023/04/04 14:24:52 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

void	test1(void)	{
	try	{
		/* code that does something */
		if (/*there's an error*/) {
			throw std::exception();
		}
		else
			/*do the real thing*/
	}
	catch(const std::exception& e)	{
		/*Handle the error here
		std::cerr << e.what() << '\n';*/
	}
	
}
void	test2(void)	{
	/* code that does something */
	if (/*there's an error*/) {
		throw std::exception();
	}
	else
		/*do the real thing*/
}

void	test3(void)	{
	try	{
		test2();
	}
	catch(const std::exception& e)	{
		/*Handle the error here
		std::cerr << e.what() << '\n';*/
	}
	
}

void	test4(void)	{
	Class	PEBKACException	: public std::exception	{
		// PEBKACException herite de std::exception

		public:

			virtual const char* what(void) const throw(POnyIsNotHe reException)	{
				// throw lorsqu'il est place a la fin d'une definition
				// de fonction est un throw specifieur, c-a-d qu'il indique
				// que la fonction peut throw qqchose, ou pas (void);
				// C'est une maniere propre de preciser quel sont les exceptions
				// qu'une methode peut remonter.
				return ("problem exists betxeen keyboard and chair");
			}
	};

	try	{
		test3(void);
	}
	catch(PEBKACexception& e)	{
		// Handle the fact that ouer usr is an idiot
		// C'est un catch specifique
	}
	catch(const std::exception& e)	{
		// Handle other exceptions which are from std::exception
		// C'est un catch generique
	}
}