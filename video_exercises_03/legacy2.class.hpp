/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   legacy2.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:14:24 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 11:25:32 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEGACY2_CLASS_H
# define LEGACY2_CLASS_H

// Libraries ******************************* //
#include <iostream>
#include <string>
// ******************************* Libraries //



// Classes ********************************* //
class Animal {
	// il faudra instancier la classe Animal avant les classes derivees
	public:

	
	Animal(void);									// Canonical
	Animal(Sample const & src);						// Canonical
	~Animal(void);									// Canonical

	Animal & 	operator=(Animal const & rhs);		// Canonical


	void	setLegs(int number);
	int		getLegs(void) const;

	void	run(int distance);
	void	call(void);
	void	eat(std::string const & what);
	void	walk(int distance);

private:

	int		_privateNumberOfLegs;
}


class Cat : public Animal	{
// Le Cat est un Animal, qui a en plus des comportements propres.
//
// NIVEAUX D'ENCAPSULATION D'HERITAGE
// public : accesible n'importe ou
// private : accessible uniquement dans la classe / une instance de la classe
// protected : accessible depuis une instance de la classe ou des classes derivees
public:

	
	Cat(void);										// Canonical
	Cat(Sample const & src);						// Canonical
	~Cat(void);										// Canonical

	Cat & 	operator=(Cat const & rhs);				// Canonical

	void	scornSomeone(std::string const & target);

};

class Otter : public Animal	{
// Le Cat est un Animal, qui a en plus des comportements propres
public:

	
	Otter(void);										// Canonical
	Otter(Sample const & src);						// Canonical
	~Otter(void);										// Canonical

	Otter & 	operator=(Otter const & rhs);				// Canonical

};

class Pony	{

public:
	Pony(void);
	Pony(Pony const & src);
	~Pony(void);

	Pony&	operator=(Pony const & rhs);

	void	doMagic(std::string const & target);
	// on pourrait refaire ici le comportement run si le Pony a
	// une facon differente de courir

};

// ********************************* Classes //



// Non Member ****************************** //
// ****************************** Non Member //



#endif // ****************** LEGACY2_CLASS_H //

// On pourrait factoriser certains des comportements de ces deux classes...