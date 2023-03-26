/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:22:02 by alambert          #+#    #+#             */
/*   Updated: 2023/03/26 17:01:50 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

// Constructor Destructor ************************************************** //
Integer::Integer(int const n) : _privateN(n)	{
	std::cout << "Constructor called with a value: " << n << std::endl;
	return;
}
Integer::~Integer(void)	{
	std::cout << "Destructor called with a value: " << this->getValue() << std::endl;
	return;
}
// ************************************************** Constructor Destructor //



// Member functions ******************************************************** //
int Integer::getValue(void) const {
	return this->_privateN;
}

Integer & 	Integer::operator=(Integer const & rhs)	{
	// On a deux parametres : this et rhs
	std::cout << "Assignation operator called from: " << this->_privateN << " to: " << rhs.getValue() << std::endl;
	// On peut recuperer la valeur de l'entier rhs grace a l'accesseur
	// et on va utiliser cette valeur pour mettre a jour le _privateN
	// de l'instance courante :
	this->_privateN = rhs.getValue();
	// Etant donne qu'on renvoie une reference sur instance de classe
	// Integer, en l'occurence l'instance courante, on a a disposition
	// le pointeur this qui vient d'etre mis a jour a la ligne d'avant.
	//
	// Pour pouvoir renvoyer une reference dessus, il suffit de le
	// dereferencer : *this, pour recuperer la reference :
	return *this;
}

Integer		Integer::operator+(Integer const & rhs) const	{
	// ici aussiona deux parametres : this et une reference sur un 
	// Integer const : rhs
	std::cout << "Assignation operator called with: " << this->_privateN << " and: " << rhs.getValue() << std::endl;

	// On fait l'addition entre le _privateN de l'instance courante et
	// celui de l'instance rhs, via getValue().
	// Le resultat va etre utilise pour creer une nouvelle instance de
	// la classe Integer, et on va renvoyer une copie de cette instance
	// dans laquelle sera le resultat de l'addition :
	return Integer(this->_privateN + rhs.getValue());
}
// ******************************************************** Member functions //



// Non Member functions **************************************************** //
std::ostream &	operator<<(std::ostream & o, Integer const & rhs)	{
	// En parametres on a :
	// une reference sur instance de ostream,
	// une reference sur instance de ma classe Integer, pour qu'on puisse
	// faire notre affichage ; vu qu'on ne va pas modifier la classe entier
	// on met la refernce en const.
	o << rhs.getValue();
	// On utilise notre flux de sortie o sur lequel on va pouvoir rediriger
	// un int, puisque dans la classe ostream, << a ete surcharge pour pouvoir
	// prendre et renvoyer un entier.
	return	(o);
	// on retourne la reference sur l'instance ostream o, ce qui permettra de
	// chainer plusieurs redirections.
}
// **************************************************** Non Member functions //