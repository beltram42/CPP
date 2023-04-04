/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   legacy1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:14:24 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 11:25:32 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEGACY1_CLASS_H
# define LEGACY1_CLASS_H

// Libraries ******************************* //
#include <iostream>
#include <string>
// ******************************* Libraries //



// Classes ********************************* //
class Cat {

public:

	
	Cat(void);								// Canonical
	Cat(Sample const & src);				// Canonical
	~Cat(void);								// Canonical

	Cat & 	operator=(Cat const & rhs);		// Canonical


	void	setLegs(int number);
	int		getLegs(void) const;

	void	run(int distance);
	void	scornSomeone(std::string const & target);


private:

	int		_privateNumberOfLegs;

};


class Pony	{

public:
	Pony(void);
	Pony(Pony const & src);
	~Pony(void);

	Pony&	operator=(Pony const & rhs);


	void	setLegs(int number);
	int		getLegs(void);

	void	run(int distance);
	void	doMagic(std::string const & target);


private:

	int		_privateNumberOfLegs;

};

// ********************************* Classes //



// Non Member ****************************** //
// ****************************** Non Member //



#endif // ****************** LEGACY1_CLASS_H //

// On pourrait factoriser certains des comportements de ces deux classes...