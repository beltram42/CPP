/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:35:24 by alambert          #+#    #+#             */
/*   Updated: 2023/03/26 18:08:28 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

// Constructor Destructor ************************************************** //
Sample::Sample(void) : _privateFoo(0)	{
	std::cout << "Default Constructor called" << std::endl;
	return;
}

Sample::Sample(int const n) : _privateFoo(n)	{
	std::cout << "Parametric Constructor called, with a value: " << this->getValue() << std::endl;
	return;
}

Sample::Sample(Sample const & src)	{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Sample::~Sample(void)	{
	std::cout << "non virtual Destructor called" << std::endl;
	return;
}
// ************************************************** Constructor Destructor //



// Member functions ******************************************************** //
int		Sample::getValue(void) const	{
	return (this->_privateFoo);
}

Sample & 	Sample::operator=(Sample const & rhs)	{
	std::cout << "Assignment operator called from: " << this->_privateFoo << " to: " << rhs.getValue() << std::endl;
	this->_privateFoo = rhs.getValue();
	return *this;
}
// ******************************************************** Member functions //



// Non Member functions **************************************************** //
std::ostream &	operator<<(std::ostream & o, Sample const & i)	{
	std::cout << "Value of _privateFoo is: ";
	o << i.getValue();
	return	(o);
	}
// **************************************************** Non Member functions //